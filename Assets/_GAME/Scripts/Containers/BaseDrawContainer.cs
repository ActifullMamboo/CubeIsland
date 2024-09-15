using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;
using _GAME.Scripts.Base;
using _GAME.Scripts.Collector;
using _GAME.Scripts.Items;
using _GAME.Scripts.Player;
using _Game.Scripts.View;
using DG.Tweening;
using Sirenix.Utilities;

namespace _GAME.Scripts.Containers
{
    public class BaseDrawContainer : BaseView
    {
        [SerializeField] private List<PointView> _containerPoints;
        [SerializeField] private ContainerType _containerType;
        [SerializeField] private CollectableItem _itemPrefab;
        
        private FeedItems _collectItem;

        public PointView FirstPoint => _containerPoints.IsNullOrEmpty() ? null : _containerPoints[0];
        public void SetupCollectionType(ItemType itemType)
        {
            _collectItem = new FeedItems { Count = 0, ItemType = itemType };
        }
        
        public override void Init()
        {
            base.Init();

            for (var i = 0; i < _containerPoints.Count; i++)
            {
                _containerPoints[i].SetAvailable(true);
            }

            var count = SaveSystem.LoadResourcesInContainer(_collectItem, _containerType);
            _collectItem.Count = count;
            _collectItem.items = new List<CollectableItem>();
            for (var i = 0; i < count; i++)
            {
                var colI = Instantiate(_itemPrefab);
                colI.Init();
                colI.SetupItemView(_collectItem.ItemType);
                colI.StartSetup(transform);
                var freePoint = _containerPoints.FirstOrDefault(p => p.IsFree);
                if (freePoint != null) colI.ForceMoveToPoint(freePoint, null, freePoint.transform);
                _collectItem.items.Add(colI);
            }
        }
        
      

        public bool IsFull()
        {
            return _containerPoints.FindAll(p => p.IsFree && p.IsAvailable).Count <= 0;
        }
        public int GetAvailablePoints()
        {
            return _containerPoints.FindAll(p => p.IsFree && p.IsAvailable).Count;
        }
        public void TryMoveToContainer(CollectableItem collectableItem, Action callback)
        {
            var freePoint = _containerPoints.FirstOrDefault(p => p.IsFree);
            if (freePoint == null) return;

            var item = _collectItem;
            if (item != null)
            {
                item.Count++;
                item.items.Add(collectableItem);
            }

            SaveSystem.SaveResourcesInContainer(_collectItem, _containerType);

            collectableItem.MoveToFreePoint(freePoint, callback, freePoint.transform);
        }

        public void DrawFromContainer(List<PointView> freePoints, PlayerContaineer playerContainer)
        {
            int count = Mathf.Min(freePoints.Count, _collectItem.Count);

            for (int i = 0; i < count; i++)
            {
                var moveItem = _collectItem.items[i];
                playerContainer.TryMoveToContainer(moveItem, moveItem.OnDestinationComplete,false);
            }

            _collectItem.Count -= count;
            
            _collectItem.items.RemoveRange(0, count);
            if (count !=0)
            {
                DOVirtual.DelayedCall(count*0.05f, Reshuffle);
            }

        }

        private void Reshuffle()
        {
            SaveSystem.SaveResourcesInContainer(_collectItem, _containerType);

            List<CollectableItem> all = new List<CollectableItem>();
            
            all.AddRange(_collectItem.items);


            for (int i = 0; i < _containerPoints.Count; i++)
            {
                _containerPoints[i].FreePoint();
            }

            for (int i = 0; i < all.Count; i++)
            {
                all[i].MoveToFreePoint(_containerPoints[i],null, i*0.05f);
            }
        }
       
    }
}
