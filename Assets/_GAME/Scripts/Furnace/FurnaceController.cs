using System;
using System.Collections.Generic;
using _GAME.Scripts.Base;
using _GAME.Scripts.Items;
using _Game.Scripts.View;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.Furnace
{
    public enum FurnaceState
    {
        Idle,
        Working
    }

    public class FurnaceController : BaseView, IProductionInitializer
    {
        [SerializeField] private FurnaceConfig _furnaceConfig;
        [SerializeField] private FurnaceVisualController _visualController;
        [SerializeField] private ItemType _itemType;
        [SerializeField] private FurnaceClaimer _furnaceClaimer;
        [SerializeField] private FurnaceDrawer _furnaceDrawer;
        [SerializeField] private CollectableItem _collectableItem;
        [SerializeField] private PointView _burnPoint;
        [SerializeField] private PointView _spawnPoint;
        private FurnaceState _state = FurnaceState.Idle;

        public override void Init()
        {
            base.Init();
            _furnaceClaimer.Init();
            _furnaceDrawer.SetupCollectionType(_itemType);
            _furnaceDrawer.Init();
            _visualController.Init();

            for (int i = 0; i < _furnaceConfig.NeedItemsForCycle.Count; i++)
            {
                PointView firstResPoint = _furnaceClaimer.FirstPointOf(_furnaceConfig.NeedItemsForCycle[i].ItemType);
                firstResPoint.OnBusy += CheckFurnaceStart;
            }

            PointView drawerPoint = _furnaceDrawer.FirstPoint;
            drawerPoint.OnFree += CheckFurnaceStart;
        }

        public void Initialize()
        {
            Init();
        }

        private void CheckFurnaceStart(PointView pointView)
        {
            CheckNeedResources();
        }
        private void CheckNeedResources()
        {
            if (_state != FurnaceState.Idle)
                return;
            if (_furnaceDrawer.IsFull())
                return;

            var needItems = new List<CollectableItem>();

            var needCount = 0;

            for (var i = 0; i < _furnaceConfig.NeedItemsForCycle.Count; i++)
            for (var j = 0; j < _furnaceConfig.NeedItemsForCycle[i].CountForCycle; j++)
            {
                needCount += 1;

                var item = _furnaceClaimer.HasItem(_furnaceConfig.NeedItemsForCycle[i].ItemType);
                if (item != null) needItems.Add(item);
            }

            if (needItems.Count < needCount) return;
            needItems.Clear();
            for (var i = 0; i < _furnaceConfig.NeedItemsForCycle.Count; i++)
            for (var j = 0; j < _furnaceConfig.NeedItemsForCycle[i].CountForCycle; j++)
            {
                var item = _furnaceClaimer.GetItem(_furnaceConfig.NeedItemsForCycle[i].ItemType);
                if (item != null) needItems.Add(item);
            }
            
            for (var i = 0; i < needItems.Count; i++)
                needItems[i].MoveToFreePoint(_burnPoint, null, _burnPoint.transform);

            StartBurn();
        }

        private void StartBurn()
        {
            _state = FurnaceState.Working;
            // DOVirtual.Float(_furnaceConfig.ReadyTime,0, )
            DOVirtual.DelayedCall(_furnaceConfig.ReadyTime, ReadyCycle);
            _visualController.VisualChanges(true);
        }

        private void ReadyCycle()
        {
            var newItem = Instantiate(_collectableItem);
            newItem.Init();
            newItem.SetupItemView(_itemType);
            newItem.StartSetup(_spawnPoint.transform);

            newItem.TryMoveToContainer(_furnaceDrawer);
            _visualController.VisualChanges(false);

            DOVirtual.DelayedCall(.1f, ResetFurnace);
        }

        private void ResetFurnace()
        {
            _state = FurnaceState.Idle;
            CheckNeedResources();
        }
    }

    [Serializable]
    public class FurnaceConfig
    {
        public float ReadyTime = 10f;
        public List<CycleItem> NeedItemsForCycle;

        [Serializable]
        public class CycleItem
        {
            public int CountForCycle;
            public ItemType ItemType;
        }
    }

    public interface IProductionInitializer
    {
        public void Initialize();
    }
}