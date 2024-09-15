using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Other;
using _GAME.Scripts.Tasks;
using _Game.Scripts.Tools;
using _GAME.Scripts.UI.Base;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace _GAME.Scripts.UI.WorldSpace
{
    public class TaskPanel : WorldSpaceBase
    {
        private List<TaskItem> _taskItems = new();
        private TasksOnLevel _taskConfig;

        [SerializeField] private TextMeshProUGUI _levelText;
        [SerializeField] private GameObject _levelObject;
        [SerializeField] private TextMeshProUGUI _rewardText;
        [SerializeField] private Image _rewardImage;
        [SerializeField] private GameObject _rewardPanel;

        public override void Init()
        {
            base.Init();
            _taskItems = GetComponentsInChildren<TaskItem>(true).ToList();
        }

        public void SetupLevel(int level)
        {
            _levelText.text = "LEVEL " + level;
            _levelObject.Activate();
        }

        public void SetupTask(TasksOnLevel taskConfig, bool head = true)
        {
            Open();
            _taskConfig = taskConfig;
            for (var i = 0; i < _taskItems.Count; i++) _taskItems[i].Deactivate();

            if (_taskConfig == null)
            {
                if (!head)
                {
                    _rewardImage.Deactivate();
                    _rewardText.text = "new upgrade on next island";
                    return;
                }

                Close();
                return;
            }

            SetupReward(taskConfig.Reward);
            for (var i = 0; i < _taskConfig.Tasks.Count; i++)
            {
                _taskItems[i].Activate();
                var task = _taskConfig.Tasks[i];

                task.OnTaskUpdate += _taskItems[i].UpdateTask;
                task.OnOneTaskComplete += _taskItems[i].Complete;
                _taskItems[i].Show(task.ItemsCount, task.ItemType);
            }
        }

        public void SetupTaskWithDelay(TasksOnLevel taskConfig,bool head = true ,float delay = 1f)
        {
            Close();

            DOVirtual.DelayedCall(delay, delegate { SetupTask(taskConfig,head); }, false);
        }

        public override void Close()
        {
            gameObject.Deactivate();
        }

        private void SetupReward(Reward taskConfigReward)
        {
            _rewardPanel.Deactivate();
            if (taskConfigReward.RewardSprite == null)
            {
                _rewardImage.Deactivate();
            }
            else
            {
                _rewardImage.Activate();
                _rewardImage.sprite = taskConfigReward.RewardSprite;
            }

            if (taskConfigReward.RewardText.IsNullOrEmpty())
            {
                _rewardText.Deactivate();

            }
            else
            {
                _rewardText.Activate();
                _rewardText.text = taskConfigReward.RewardText;

            }

            if (taskConfigReward.RewardSprite == null && taskConfigReward.RewardText.IsNullOrEmpty())
            {
                _rewardPanel.Deactivate();
                return;

            }
            _rewardPanel.Activate();

        }

        public void ScaleIn(float f)
        {
            transform.DOKill();
            transform.DOScale(Vector3.one * f, 0.5f).SetEase(Ease.OutSine);
        }
    }
}