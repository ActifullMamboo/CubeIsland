using System;
using System.Collections.Generic;
using System.Collections;
using System.Linq;
using _GAME.Scripts.Base;
using _GAME.Scripts.Collector;
using _GAME.Scripts.Containers;
using _GAME.Scripts.Furnace;
using _GAME.Scripts.Items;
using _Game.Scripts.Systems;
using _Game.Scripts.Tools;
using _GAME.Scripts.UI.WorldSpace;
using _GAME.Scripts.UI.WorldSpace.Max;
using _GAME.Scripts.Upgrades;
using _Game.Scripts.View;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.Player
{
    public enum ContainerType
    {
        Player,
        Garden,
        Shop,
        FurnaceClaimer,
        FurnaceDrawer
    }
    public class PlayerContaineer : BaseView, IPlayerComponent, ISoundPlayer
    {
        [SerializeField] private List<PointView> _containeerPoints;
        [SerializeField] private Upgradable _containerUpgradable;
        [SerializeField] private ContainerType _containerType;
        [SerializeField] private CollectableItem _itemPrefab;
        [SerializeField] private CapasityVisualizer _visualizer;
        [SerializeField] private GameObject backpack;

        private List<FeedItems> _items = new();
        private SoundSystem _soundSystem;
        private Action TutorialCallback;
        public void InitSound(SoundSystem soundSystem)
        {
            _soundSystem = soundSystem;
        }
        public void InitializeComponent(VariableJoystick joystick)
        {
            Init();
        }
        public override void Init()
        {
            base.Init();
            _containerUpgradable.OnUpgrade += SetupContainerCapacity;
            for (int i = 0; i < _containeerPoints.Count; i++)
            {
                _containeerPoints[i].SetAvailable(false);
            }
            var maxCapacity = _containerUpgradable.StartLevelCount +
                              _containerUpgradable.IncrementOnLevel * _containerUpgradable.Level;

            for (var i = 0; i < maxCapacity; i++) _containeerPoints[i].SetAvailable(true);
           
            ShowCapacity();
            if (_containerUpgradable.Level>=1)
            {
                backpack.Activate();
            }
            for (var i = 1; i < Enum.GetValues(typeof(ItemType)).Length; i++)
            {
                var itm = new FeedItems { Count = 0, ItemType = (ItemType)Enum.GetValues(typeof(ItemType)).GetValue(i) };
                itm.items = new List<CollectableItem>();
                itm.Count = SaveSystem.LoadResourcesInContainer(itm, _containerType);
                _items.Add(itm);

                for (int q = 0; q < itm.Count; q++)
                {
                    var colI = Instantiate(_itemPrefab);
                    colI.Init();
                    colI.SetupItemView((ItemType)Enum.GetValues(typeof(ItemType)).GetValue(i));
                    colI.StartSetup(transform);
                    var freePoint = _containeerPoints.FirstOrDefault(p => p.IsFree);

                    colI.ForceMoveToPoint(freePoint, null, freePoint.transform);
                    itm.items.Add(colI);
                }
            }
            _visualizer.Open();
            _visualizer.SetTarget(transform);
            ShowCapacity();

        }

        private void SetupContainerCapacity()
        {
            var maxCapacity = _containerUpgradable.StartLevelCount +
                           _containerUpgradable.IncrementOnLevel * _containerUpgradable.Level;

            for (var i = 0; i < maxCapacity; i++) _containeerPoints[i].SetAvailable(true);
           
            ShowCapacity();
            backpack.Activate();

            if (_soundSystem)
            {
                _soundSystem.PlaySound(GameSoundType.ItemEquip, transform);

            }
        }

        public bool IsFull()
        {
            bool full = _containeerPoints.FindAll(p => p.IsFree && p.IsAvailable).Count <= 0;
            return full;
        }
        
        public bool IsEmpty()
        {
           return _containeerPoints.FindAll(p => !p.IsFree && p.IsAvailable).Count <= 0;
        }


        private void ShowCapacity()
        {
            int current = _containeerPoints.FindAll(p => !p.IsFree && p.IsAvailable).Count;
            int max = _containeerPoints.FindAll(p =>  p.IsAvailable).Count;
            _visualizer.Show(current,max);
        }

        public void TryMoveToContainer(CollectableItem collectableItem, Action callback, bool sound = true)
        {
            var freePoint = _containeerPoints.FirstOrDefault(p => p.IsFree);
            if (freePoint == null) return;

            var item = _items.FirstOrDefault(x => x.ItemType == collectableItem.ItemConfig.ItemType);
            if (item != null)
            {
                item.Count++;
                item.items.Add(collectableItem);
            }
            SaveSystem.SaveResourcesInContainer(_items, _containerType);
            if (sound)
            {
                _soundSystem.PlaySound(GameSoundType.PickUp, transform);
            }

            collectableItem.MoveToFreePoint(freePoint, callback, freePoint.transform);
            ShowCapacity();
        }

        public void DrawAllItems(PointView feedPoint)
        {
            var listItem = _items.Find(x => x.items.Count >0);

            if (listItem.items.Count >0)
            {
                var moveItem = listItem.items[0];
                moveItem.MoveToFreePoint(feedPoint, null, 0.1f, feedPoint.transform,true);
                listItem.Count -= 1;
                listItem.items.RemoveAt(0);
                _soundSystem.PlaySound(GameSoundType.PickUp, transform);

                SaveSystem.SaveResourcesInContainer(_items, _containerType);

                ShowCapacity();
            }
           
        }
        public void DrawFromContainer( List<FeedItems> feedItm, PointView feedPoint, out FeedItems outItems)
        {
            outItems = null;
            for (int i = 0; i < feedItm.Count; i++)
            {
                if (feedItm[i].Count==0)
                    continue;
                var listItem = _items.Find(x => x.ItemType == feedItm[i].ItemType);
                if (listItem == null)
                    continue;

                if (listItem.items.Count == 0)
                {
                    continue;
                }
                
                var moveItem = listItem.items.Last();
                moveItem.MoveToFreePoint(feedPoint, null, 0.1f, feedPoint.transform,true);
                _soundSystem.PlaySound(GameSoundType.PickUp, transform);

                FeedItems itm = new FeedItems { Count = 1, ItemType = listItem.ItemType };
                outItems = itm;
                listItem.Count -= 1;
                listItem.items.Remove(moveItem);
                break;
            }
           
            SaveSystem.SaveResourcesInContainer(_items, _containerType);

            ShowCapacity();

            /*for (var i = 0; i < feedItm.Count; i++)
            {
                var items = _items.Find(x => x.ItemType == feedItm[i].ItemType);

                if (items == null)
                    continue;

                var count = Mathf.Min(items.Count, feedItm[i].Count);
                for (var j = 0; j < count; j++)
                {
                    var moveItem = _items[i].items[j];
                    moveItem.MoveToFreePoint(feedPoint, null, j * 0.2f, feedPoint.transform);
                }
                FeedItems itm = new FeedItems { Count = count, ItemType = _items[i].ItemType };
                outItems.Add(itm);
                _items[i].Count -= count;
                _items[i].items.RemoveRange(0, count);

            }
            SaveSystem.SaveResourcesInContainer(_items, _containerType);*/
        }
        public void DrawFromContainer( List<FeedItems> feedItm, List<FurnacePoint> points, out CollectableItem outItems, out ItemType type)
        {
            type = ItemType.none;
            outItems = null;
            for (int i = 0; i < feedItm.Count; i++)
            {
                if (feedItm[i].Count==0)
                    continue;
                var listItem = _items.Find(x => x.ItemType == feedItm[i].ItemType);
                if (listItem == null)
                    continue;

                if (listItem.items.Count == 0)
                {
                    continue;
                }
               
                var moveItem = listItem.items.Last();
                var jumpPoint = points.FirstOrDefault(x =>
                    x.ItemTYpe == moveItem.ItemConfig.ItemType && x.IsFree);
                if (jumpPoint==null)
                {
                    return;
                }
                moveItem.MoveToFreePointOnDelay(jumpPoint, null, 0.05f);
                _soundSystem.PlaySound(GameSoundType.PickUp, transform);

                type = listItem.ItemType;
                outItems = moveItem;
                listItem.Count -= 1;
                listItem.items.Remove(moveItem);
                break;
            }
           
            SaveSystem.SaveResourcesInContainer(_items, _containerType);

            ShowCapacity();

            /*for (var i = 0; i < feedItm.Count; i++)
            {
                var items = _items.Find(x => x.ItemType == feedItm[i].ItemType);

                if (items == null)
                    continue;

                var count = Mathf.Min(items.Count, feedItm[i].Count);
                for (var j = 0; j < count; j++)
                {
                    var moveItem = _items[i].items[j];
                    moveItem.MoveToFreePoint(feedPoint, null, j * 0.2f, feedPoint.transform);
                }
                FeedItems itm = new FeedItems { Count = count, ItemType = _items[i].ItemType };
                outItems.Add(itm);
                _items[i].Count -= count;
                _items[i].items.RemoveRange(0, count);

            }
            SaveSystem.SaveResourcesInContainer(_items, _containerType);*/
        }
         public void DrawFromContainer(List<FeedItems> feedItm, List<FurnacePoint> points, out List<FeedItems> outItems)
        {
            outItems = new List<FeedItems>();
            feedItm.Sort((p1,p2)=>p1.ItemType.CompareTo(p2.ItemType));
            var count = 0;
            for (int i = 0; i < feedItm.Count; i++)
            {
                var listItem = _items.Find(x => x.ItemType == feedItm[i].ItemType);

                if (listItem == null)
                    continue;
                count = Mathf.Min(listItem.Count, feedItm[i].Count);
                for (int j = 0; j < count; j++)
                {
                    var moveItem = listItem.items[j];
                    var jumpPoint = points.FirstOrDefault(x =>
                        x.ItemTYpe == moveItem.ItemConfig.ItemType && x.IsFree);
                    moveItem.MoveToFreePointOnDelay(jumpPoint, null, j * 0.05f);
                    _soundSystem.PlaySound(GameSoundType.PickUp, transform);

                }

                var itmes = new List<CollectableItem>();
                itmes.AddRange(listItem.items);
                FeedItems itm = new FeedItems { Count = count, ItemType = listItem.ItemType, items =itmes };
                outItems.Add(itm);
                listItem.Count -= count;
                listItem.items.RemoveRange(0, count);
            }

            if (count >0)
            {
                DOVirtual.DelayedCall(count*0.05f, Reshuffle);

            }
            ShowCapacity();

        }

        public void Reshuffle()
        {
            SaveSystem.SaveResourcesInContainer(_items, _containerType);

            List<CollectableItem> all = new List<CollectableItem>();
            
            for (int i = 0; i < _items.Count; i++)
            {
                all.AddRange(_items[i].items);
            }

            for (int i = 0; i < _containeerPoints.Count; i++)
            {
                _containeerPoints[i].FreePoint();
            }

            for (int i = 0; i < all.Count; i++)
            {
                all[i].MoveToFreePoint(_containeerPoints[i],null, i*0.05f);
            }
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.TryGetComponent(out BaseDrawContainer gardenContainer))
            {
                var freePoints = _containeerPoints.FindAll(x => x.IsFree && x.IsAvailable);
                gardenContainer.DrawFromContainer(freePoints, this);
                SaveSystem.SaveResourcesInContainer(_items, _containerType);

            }
        }

        public override void OnDestroy()
        {
            _containerUpgradable.OnUpgrade -= SetupContainerCapacity;

            base.OnDestroy();
        }

        public List<CollectableItem> GetAllItems()
        {
            List<CollectableItem> allitems = new List<CollectableItem>();
            for (int i = 0; i < _items.Count; i++)
            {
                allitems.AddRange(_items[i].items);
            }

            return allitems;
        }

        public void OnGetResource(Action runNextStep, int i, ItemType tree)
        {
            TutorialCallback = runNextStep;
            StartCoroutine(CheckRoutine(i, tree));
        }

        IEnumerator CheckRoutine(int i, ItemType type)
        {
            while (true)
            {
                yield return new WaitForSeconds(0.5f);

                int k = _items.Find(x => x.ItemType == type).Count;
                if (k>=i)
                {
                    TutorialCallback.Invoke();
                    break;
                }
            }
        }
    }
}