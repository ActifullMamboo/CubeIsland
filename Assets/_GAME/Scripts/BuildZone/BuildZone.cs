using System.Collections;
using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Collector;
using _GAME.Scripts.Gardens;
using _GAME.Scripts.Player;
using _GAME.Scripts.Tasks;
using _Game.Scripts.Tools;
using _Game.Scripts.View;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.BuildZones
{
    public class BuildZone : BaseClaimer
    {
        [SerializeField] [Space] private bool _startGardenerWorks;

        [SerializeField] private Garden garden;
        [SerializeField] private TabletView _tabletView;
        [SerializeField] private OneTask _taskToUnlock;

        [SerializeField] private PointView _point;
        public bool IsBuilded;
        [SerializeField] private Transform _plane;

        private PlayerContaineer _playerContainer;

        private void Show()
        {
            
            _tabletView.Init();
            _tabletView.SetupTask(_taskToUnlock,garden.GetGardenType());
            _plane.DOScale(Vector3.one * 1.2f, 1.5f).SetEase(Ease.OutSine).SetLoops(-1, LoopType.Yoyo);
            _tabletView.transform.DOLocalMoveY( 1f, 1.5f).SetRelative(true).SetEase(Ease.OutSine).SetLoops(-1, LoopType.Yoyo);
        }

        protected override void OnEnterInCollision(Collider collision)
        {
            base.OnEnterInCollision(collision);
            if (!collision.TryGetComponent(out PlayerContaineer playerContainer))
                return;
            _playerContainer = playerContainer;
            _drawCall?.Kill();
            _drawCall = DOVirtual.DelayedCall(0.3f, LoopDraw, false);
        }

        protected override void OnExitCollision(Collider collision)
        {
            if (!collision.TryGetComponent(out PlayerContaineer playerContainer))
                return;
            _playerContainer = null;
            _drawCall.Kill();
            playerContainer.Reshuffle();
        }
        private Tween _drawCall;
        private void LoopDraw()
        {
            var feedItems = new List<FeedItems>();

            var item = new FeedItems { Count = _taskToUnlock.ItemsCount, ItemType = _taskToUnlock.ItemType };

            feedItems.Add(item);

            if (_playerContainer == null)
                return;


            _playerContainer.DrawFromContainer(feedItems, _point, out FeedItems outItems);

            if (outItems != null)
            {
                UpdateTask(1);
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
        }

        public override void Init()
        {
            garden.Init();

            if (IsBuilded)
            {
                OpenGarden();
            }
            else
            {
                var unlocked = SaveSystem.GetGarden(_taskToUnlock.ItemType);

                if (unlocked)
                {
                    OpenGarden();
                }
                else
                {
                    if (SaveSystem.LoadGardenCount(_taskToUnlock.ItemType)!=0)
                    {
                        _taskToUnlock.ItemsCount = SaveSystem.LoadGardenCount(_taskToUnlock.ItemType);

                    }
                    Show();
                    garden.Deactivate();
                }
            }
            base.Init();
        }

        private void OpenGarden()
        {
            garden.Activate();
            gameObject.Deactivate();
            if (garden.GetComponentInChildren<ItemVisualizer>())
            {
                garden.GetComponentInChildren<ItemVisualizer>().ShowEnabled(0);
            }
            if (_startGardenerWorks) garden.StartGardenerWork();
            
        }

        private void UpdateTask(int count)
        {
            _taskToUnlock.ItemsCount -= count;
            SaveSystem.SaveGardenCount(_taskToUnlock.ItemType, _taskToUnlock.ItemsCount);
            _taskToUnlock.OnTaskUpdate(_taskToUnlock.ItemsCount);
            if (_taskToUnlock.ItemsCount != 0) return;
            _taskToUnlock.OnOneTaskComplete.Invoke(_taskToUnlock);
            SaveSystem.SaveGarden(_taskToUnlock.ItemType);
            OpenGarden();
        }
    }
}