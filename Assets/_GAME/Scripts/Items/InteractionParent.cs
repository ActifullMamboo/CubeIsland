using System;
using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Base;
using _GAME.Scripts.Items;
using _GAME.Scripts.Player;
using _Game.Scripts.Tools;
using DG.Tweening;
using UnityEngine;

namespace _Game.Scripts.View
{
    public class InteractionParent : BaseTriggerItem
    {
        public Action OnRecovery;
        public Action OnHitAction;
        public Action OnInitAction;
        public Action OnVisualChange;
        [SerializeField] private ItemType _itemType;
        [SerializeField] private CollectableItem _collectableItem;
        [SerializeField] private List<PointView> _aroundPoints;
        [SerializeField] private GameObject _obstacle;
        [SerializeField] private PointView _workPoint;
        [SerializeField] private bool  _customGrow;
        
        private List<InteractItem> _items = new();
        private bool _isActive = true;

        private int _currentItem;
        private float _recoveryTime;
        private Tween _recoveryCallback;

        public void SetItemType(ItemType type)
        {
            _itemType = type;
        }

        public override void Init()
        {
           
            base.Init();
            _items = GetComponentsInChildren<InteractItem>().ToList();
            for (int i = 0; i < _aroundPoints.Count; i++)
            {
                _aroundPoints[i].VisualRotate();
            }

            for (var i = 0; i < _items.Count; i++)
            {
                
                _items[i].SetupItem(_itemType, _collectableItem, _aroundPoints);

                _items[i].Init();

                _items[i].OnItemDestroyed += OnDestroyItem;
            }

            _recoveryTime = _items[0].ItemConfig.RecoveryTime;
            
            if (_workPoint)
            {
                _workPoint.Init();

            }
            OnInitAction?.Invoke();
        }

        public void Hit(Weapon weapon)
        {
            if (!_isActive)
                return;
            transform.DOShakePosition(0.2f, new Vector3(0.03f, 0, 0.03f)).SetEase(Ease.OutSine);
            _items[_currentItem].Hit(weapon);
            OnHitAction?.Invoke();
        }

        private void OnDestroyItem(InteractItem item)
        {
            _currentItem++;
            if (!_customGrow)
            {
                _recoveryCallback?.Kill();
                _recoveryCallback =DOVirtual.DelayedCall(_recoveryTime, Recovery);
            }
            
            if (_currentItem < _items.Count) return;
            if (_customGrow)
            {
                _recoveryCallback?.Kill();
                _recoveryCallback =DOVirtual.DelayedCall(_recoveryTime, CustomRecovery);
            }
            _obstacle.Deactivate();
            _isActive = false;
            OnVisualChange?.Invoke();
        }

        public bool IsItemIsActive()
        {
            return _isActive;
        }
        private void Recovery()
        {
            _isActive = true;
            _obstacle.Activate();

            _currentItem--;
            _items[_currentItem].Reset();
            OnRecovery?.Invoke();

            if (_currentItem ==0)
                return;
            _recoveryCallback =DOVirtual.DelayedCall(_recoveryTime, Recovery);
        }

        private void CustomRecovery()
        {            
            _isActive = true;
            _obstacle.Activate();
            _currentItem = 0;

            _items.Reverse();
            for (int i = 0; i < _items.Count; i++)
            {
                var itm = _items[i];
                DOVirtual.DelayedCall(i * 0.15f, delegate {itm.Reset(); });
            }
            _items.Reverse();
        }

        public override void OnDestroy()
        {
            base.OnDestroy();
            for (var i = 0; i < _items.Count; i++) _items[i].OnItemDestroyed -= OnDestroyItem;
        }

        public PointView WorkPoint()
        {
            return _workPoint;
        }

        public List<PointView> GetDroppedItemPoint()
        {
            return _aroundPoints.FindAll(x => !x.IsFree);
        }

        public ItemType GetItemType()
        {
            return _itemType;
        }

        public void UnparentCoitainer(Transform transformParent)
        {
            for (int i = 0; i < _aroundPoints.Count; i++)
            {
                _aroundPoints[i].SetParent(transformParent);
            }
        }
    }
}