using System;
using System.Collections.Generic;
using _GAME.Scripts.Base;
using _GAME.Scripts.Player;
using _Game.Scripts.Tools;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.Items
{
    public class InteractItem : BaseItem
    {
        public Action<InteractItem> OnItemDestroyed;
        private ItemType _type;
        private CollectableItem _collectableItem;
        private int _itemNumber;

        private int _hitsToCollect;
        private readonly List<CollectableItem> _collectableItems = new();

        private List<PointView> _nearestPoints;
        private ParticleSystem _Fx;

        public void SetupItem(ItemType itemType, CollectableItem item, List<PointView> points)
        {
            _type = itemType;
            _collectableItem = item;
            _nearestPoints = points;
        }

        public override void Init()
        {
            base.Init();
            for (var i = 0; i < 25; i++)
            {
                var item = Instantiate(_collectableItem);
                item.Init();
                item.SetupItemView(_type);
                item.StartSetup(transform);
                _collectableItems.Add(item);
            }

            SetupItemView(_type);
            _hitsToCollect = ItemConfig.HitsToCollect;

            _Fx = Instantiate(ItemConfig.HitFX, transform.parent);
            _Fx.transform.position = transform.position;
        }

        public void Hit(Weapon weapon)
        {
            if (_hitsToCollect>0)
            {
                _hitsToCollect -= 1 * weapon.HitMultiplier;
                _Fx.Play();
            }

            if (_hitsToCollect > 0) return;

            var item = _collectableItems[_itemNumber];
            item.Reset();
            var freePoints = _nearestPoints.FindAll(x => x.IsFree && x.IsAvailable);
            var point = freePoints.RandomValue();
            if (point == null)
                return;
            item.MoveToFreePoint(point, delegate { SetItemPickable(item); }, point.transform);
            _itemNumber++;
            if (_itemNumber >= _collectableItems.Count) _itemNumber = 0;
            OnItemDestroyed?.Invoke(this);
            VisualRemoving();
        }

        private void SetItemPickable(CollectableItem item)
        {
            item.transform.DOLocalRotate(Vector3.zero, 0.2f);
            item.transform.DOShakeScale(0.1f, .2f);
            item.SetPickable(true);
        }

        private void VisualRemoving()
        {
            transform.DOScale(1.3f, 0.1f).OnComplete(() =>
                transform.DOScale(Vector3.zero, 0.3f).SetEase(Ease.OutSine).OnComplete(gameObject.Deactivate));
        }

        public override void Reset()
        {
            gameObject.Activate();
            transform.DOScale(Vector3.one, 0.23f).SetEase(Ease.OutBack)
                .OnComplete(() => _hitsToCollect = ItemConfig.HitsToCollect);
            if (_Fx) _Fx.Play();
            base.Reset();
        }
    }
}