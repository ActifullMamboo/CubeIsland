using System;
using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Base;
using _GAME.Scripts.Cameras;
using _GAME.Scripts.Other;
using _GAME.Scripts.Player;
using _GAME.Scripts.Rewards;
using _Game.Scripts.Systems;
using _GAME.Scripts.Tasks;
using _Game.Scripts.Tools;
using _GAME.Scripts.UI.WorldSpace;
using DG.Tweening;
using UnityEngine;
using CameraType = _GAME.Scripts.Cameras.CameraType;

namespace _GAME.Scripts.Collector
{
    public enum TaskHolder
    {
        MainHead,
        Trader,
        Dog
    }

    public class TaskClaimer : BaseClaimer, ITaskClaimer, ISoundPlayer
    {
        public event Action<TaskClaimer> OnTaskDone;

        [SerializeField] private List<TaskConfig> _levelConfigs;
        [SerializeField] private PointView _feedPoint;


        [SerializeField] private TaskHolder _taskHolder;
        [SerializeField] private VillagerBehaviour _villager;
        private TaskPanel _taskPanel;
        private TaskConfig _taskConfig;
        private TasksOnLevel CurrentTask;
        private RewardHolder _rewardHolder;
        private CameraController _cameraController;
        public bool IsUnlocked;
        private bool _afterCompletedTask;
        private PlayerContaineer _playerContainer;
        
        private SoundSystem _soundSystem;
        public void InitSound(SoundSystem soundSystem)
        {
            _soundSystem = soundSystem;
        }
        public void SetupTasks(WorldSpace worldSpace, RewardHolder rewardHolder, CameraController cameraController)
        {
            _rewardHolder = rewardHolder;
            _cameraController = cameraController;
            _taskPanel = worldSpace.GetAvailableTaskPanel();
            var levelNum = LevelManager.NumberOfLevel;
            var conf = _levelConfigs[0];
            _taskConfig = Instantiate(conf);
            CurrentTask = _taskConfig.TasksOnLevel.FirstOrDefault(t =>
                t.TaskID== SaveSystem.GetSavedTask(_taskHolder));

            if (SaveSystem.GetCurrentTask(_taskHolder)!=null)
            {
                if (CurrentTask!=null)
                {
                    for (int i = 0; i < CurrentTask.Tasks.Count; i++)
                    {
                        CurrentTask.Tasks[i].ItemsCount = SaveSystem.GetCurrentTask(_taskHolder)[i];
                    }
                }
              
            }
           
            
            if (CurrentTask != null)
            {
                CurrentTask.Reward = _taskConfig.TasksOnLevel
                    .FirstOrDefault(t => t.TaskID == SaveSystem.GetSavedTask(_taskHolder))
                    ?.Reward;
                _taskPanel.Show(transform);
                _taskPanel.SetupTask(CurrentTask, _taskHolder == TaskHolder.MainHead);
            }

            if (!IsUnlocked)
            {
                _taskPanel.Close();
                gameObject.Deactivate();
            }
            if (_taskHolder == TaskHolder.Dog)
            {
                if (CurrentTask == null)
                {
                    gameObject.Deactivate();
                }
            }
            if (_taskHolder == TaskHolder.MainHead)
            {
                _villager.SetMaxPhase(_taskConfig.TasksOnLevel.Count);
                if (CurrentTask != null)
                {
                    _taskPanel.SetupLevel(CurrentTask.TaskID + 1);
                    for (var i = 0; i < CurrentTask.TaskID; i++) _villager.SetScale(0);
                    _taskPanel.Show(transform, Vector3.up * CurrentTask.TaskID);
                }
            }

            base.Init();
        }

        private Tween _drawCall;
        private Tween _drawCallAll;

        protected override void OnEnterInCollision(Collider collision)
        {
            base.OnEnterInCollision(collision);
            if (!collision.TryGetComponent(out PlayerContaineer playerContainer))
                return;
            _afterCompletedTask = false;
            _cameraController.ZoomIn();
            _playerContainer = playerContainer;
            if (CurrentTask == null) return;
            _drawCall?.Kill();
            _drawCall = DOVirtual.DelayedCall(0.3f, LoopDraw, false);
            _taskPanel.ScaleIn(1.3f);
            if (_taskHolder == TaskHolder.Trader)
            {
                _soundSystem.PlaySound( GameSoundType.HappySeller);
            }
        }

        private void LoopDraw()
        {
            var feedItems = new List<FeedItems>();

            var task = CurrentTask;
            for (var i = 0; i < task.Tasks.Count; i++)
            {
                var item = new FeedItems
                    { Count = task.Tasks[i].ItemsCount, ItemType = task.Tasks[i].ItemType };
                feedItems.Add(item);
            }

            if (_playerContainer == null)
                return;

            if (_afterCompletedTask)
            {
                return;
            }
           
            _playerContainer.DrawFromContainer(feedItems, _feedPoint, out FeedItems outItems);

            if (outItems != null)
            {
                IncrementTask(1, outItems.ItemType);
                var isItems = false;
                for (var i = 0; i < feedItems.Count; i++)
                    if (feedItems[i].Count != 1)
                    {
                        isItems = true;
                        break;
                    }

                if (isItems)
                    _drawCall = DOVirtual.DelayedCall(0.1f, LoopDraw, false);
            }
            else
            {
               
                if (_taskHolder == TaskHolder.MainHead) _drawCallAll = DOVirtual.DelayedCall(0.3f, DrawAll, false);
            }
        }

        private void DrawAll()
        {
            if (!_playerContainer.IsEmpty())
            {
                _playerContainer.DrawAllItems(_feedPoint);
                _drawCallAll = DOVirtual.DelayedCall(0.3f, DrawAll, false);
            }
        }

        protected override void OnExitCollision(Collider collision)
        {
            if (!collision.TryGetComponent(out PlayerContaineer playerContainer))
                return;
            _cameraController.ZoomOut();
            _afterCompletedTask = false;
            _playerContainer = null;
            _drawCall.Kill();
            _drawCallAll.Kill();
            playerContainer.Reshuffle();
            _taskPanel.ScaleIn(1f);
        }

        private void IncrementTask(int count, ItemType itemType)
        {
            var task = CurrentTask.Tasks.Find(x => x.ItemType == itemType);
            task.ItemsCount -= count;
            task.OnTaskUpdate?.Invoke(task.ItemsCount);
            SaveSystem.SaveCurrentTask(CurrentTask, _taskHolder);
            if (task.ItemsCount != 0) return;
            SaveSystem.DeleteTaskKey(_taskHolder);
            OnTaskDone?.Invoke(this);
            task.OnOneTaskComplete.Invoke(task);
            var allTasksCompleted = true;
            for (var i = 0; i < CurrentTask.Tasks.Count; i++)
            {
                if (CurrentTask.Tasks[i].ItemsCount == 0) continue;
                allTasksCompleted = false;
                break;
            }

            if (!allTasksCompleted)
                return;
            
            _afterCompletedTask = true;
            AppMetricaEvents.TaskDone(CurrentTask.TaskID, LevelManager.PassedLevel, _taskHolder);
            if (_taskHolder == TaskHolder.Dog)
            {
                SaveSystem.SaveDog();
            }
            _soundSystem.PlaySound( GameSoundType.TaskDone);
            _taskPanel.Close();
            if (_taskHolder == TaskHolder.MainHead)
            {
                _villager.SetScale(1f);
                _cameraController.FollowTarget(null, 2f, CameraType.Head, RewardProcess);

                return;
            }

            RewardProcess();
        }

        private void RewardProcess()
        {
            _taskPanel.SetupLevel(CurrentTask.TaskID + 2);
            
            if (_taskHolder == TaskHolder.MainHead)
            {
                _taskPanel.Show(transform, Vector3.up * (CurrentTask.TaskID + 1), false);

            }

            _rewardHolder.ClaimReward(CurrentTask.Reward, 1f);

            var nextTaskId = CurrentTask.TaskID + 1;

            CurrentTask = _taskConfig.TasksOnLevel.FirstOrDefault(t => t.TaskID == nextTaskId);
            _taskPanel.SetupTaskWithDelay(CurrentTask, _taskHolder is TaskHolder.MainHead or TaskHolder.Dog);

            if (CurrentTask == null)
            {
                // nextTaskId = 0;
            }

            SaveSystem.SaveTaskID(nextTaskId, _taskHolder);
        }

        public void Show()
        {
            IsUnlocked = true;
            if (_taskPanel == null)
                return;
            _taskPanel.Show(transform, Vector3.zero, false);
            _taskPanel.SetupTaskWithDelay(CurrentTask, _taskHolder == TaskHolder.Trader,0.5f);

            gameObject.Activate();
        }

    }
}