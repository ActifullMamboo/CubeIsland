using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Base;
using _GAME.Scripts.Collector;
using _GAME.Scripts.Items;
using _GAME.Scripts.Player;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.Furnace
{
    public class FurnaceClaimer : BaseClaimer
    {
        [SerializeField] private List<FeedItems> _feedItems = new();
        [SerializeField] private List<FurnacePoint> _furnacePoints;
        [SerializeField] private ContainerType _containerType;

        [SerializeField] private CollectableItem _collectableItem;

        public override void Init()
        {
            base.Init();
            for (var i = 0; i < _furnacePoints.Count; i++) _furnacePoints[i].SetAvailable(true);

            for (var i = 0; i < _feedItems.Count; i++)
            {
                var count = SaveSystem.LoadResourcesInContainer(_feedItems[i], _containerType);

                for (var q = 0; q < count; q++)
                {
                    var colI = Instantiate(_collectableItem);
                    colI.Init();
                    colI.SetupItemView(_feedItems[i].ItemType);
                    colI.StartSetup(transform);
                    var freePoint =
                        _furnacePoints.FirstOrDefault(p => p.IsFree && p.ItemTYpe == _feedItems[i].ItemType);

                    colI.ForceMoveToPoint(freePoint, null, freePoint.transform);
                    _feedItems[i].items.Add(colI);
                }
            }
        }

        private PlayerContaineer _playerContainer;
        private Tween _drawCall;

        protected override void OnEnterInCollision(Collider obj)
        {
            if (!obj.TryGetComponent(out PlayerContaineer playerContainer))
                return;
            _playerContainer = playerContainer;
            _drawCall?.Kill();
            _drawCall = DOVirtual.DelayedCall(0.3f, LoopDraw, false);

          /*  var feedItems = new List<FeedItems>();

            for (var i = 0; i < _feedItems.Count; i++)
            {
                var item = new FeedItems
                    { Count = _feedItems[i].Count - _feedItems[i].items.Count, ItemType = _feedItems[i].ItemType };
                feedItems.Add(item);
            }

            playerContainer.DrawFromContainer(feedItems, _furnacePoints, out var outItems);
            outItems.Sort((p1, p2) => p1.ItemType.CompareTo(p2.ItemType));

            */
        }

        protected override void OnExitCollision(Collider obj)
        {
            if (!obj.TryGetComponent(out PlayerContaineer playerContainer))
                return;
            base.OnExitCollision(obj);
            _playerContainer = null;
            _drawCall.Kill();
        }

        private void LoopDraw()
        {
            var feedItems = new List<FeedItems>();

            for (var i = 0; i < _feedItems.Count; i++)
            {
                var item = new FeedItems
                    { Count = _feedItems[i].Count - _feedItems[i].items.Count, ItemType = _feedItems[i].ItemType };
                feedItems.Add(item);
            }

            if (_playerContainer == null)
                return;
            var p = _furnacePoints.First(x => x.IsFree);
            _playerContainer.DrawFromContainer(feedItems, _furnacePoints, out CollectableItem outItems, out ItemType type);
            
            if (outItems != null)
            {
                var itm = _feedItems.Find(x => x.ItemType == type);
                itm.items.Add(outItems);

                Save();
                    
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
        private void Save()
        {
            var saveItems = new List<FeedItems>();

            for (var i = 0; i < saveItems.Count; i++)
            {
                saveItems[i].Count = _feedItems[i].items.Count;
            }

            SaveSystem.SaveResourcesInContainer(saveItems, _containerType);
        }

        public CollectableItem HasItem(ItemType itemType)
        {
            var items = _feedItems.FirstOrDefault(x => x.ItemType == itemType);
            var itm = items?.items.LastOrDefault(x => x.ItemConfig.ItemType == itemType);
            return itm;
        }
        
        public CollectableItem GetItem(ItemType itemType)
        {
            var items = _feedItems.FirstOrDefault(x => x.ItemType == itemType);
            var itm = items?.items.LastOrDefault(x => x.ItemConfig.ItemType == itemType);
            if (itm != null)
            {
                items.items.Remove(itm);
                Save();
            }

            return itm;
        }


        public PointView FirstPointOf(ItemType itemType)
        {
           return _furnacePoints.FirstOrDefault(x => x.ItemTYpe == itemType);
        }
    }
}