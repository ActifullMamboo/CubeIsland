using _GAME.Scripts.Player;
using _Game.Scripts.Tools;
using _Game.Scripts.View;
using DG.Tweening;
using UnityEngine;
using _GAME.Scripts.Base;
using System;
using _GAME.Scripts.Containers;

namespace _GAME.Scripts.Items
{
    public class CollectableItem : BaseItem
    {
        private Action DelayedCall;
        private bool InContainer { get; set; }
        private Transform _startParent;
        private bool _canPick = false;
        
        public override void Init()
        {
            InContainer = false;
            base.Init();
        }
        
        public override void CollisionListener_OnEnter(Collider col)
        {
            base.CollisionListener_OnEnter(col);


            if (col.TryGetComponent(out PlayerContaineer playerContainer))
            {
                CallToPlayerContainer(playerContainer);
            }
        }

        private void CallToPlayerContainer(PlayerContaineer playerContainer)
        {
            if (playerContainer.IsFull() || InGardener)
                return;
            if (!InContainer && !_canPick)
            {
                InContainer = true;
                DelayedCall = delegate { playerContainer.TryMoveToContainer(this, OnDestinationComplete); };
            }

            if (!_canPick || InGardener)
                return;
            if (!InContainer)
            {
                InContainer = true;
                playerContainer.TryMoveToContainer(this, OnDestinationComplete);
            }
        }

        
        public void StartSetup(Transform parent)
        {
            _startParent = parent;
            Transform transform1;
            (transform1 = transform).SetParent(parent);
            transform1.localPosition = Vector3.zero;
            transform1.rotation= parent.rotation;
            gameObject.Deactivate();
        }
        
        public override void Reset()
        {
            InContainer = false;
            Transform transform1;
            (transform1 = transform).SetParent(_startParent);
            transform1.localPosition = Vector3.zero;
            transform1.rotation= _startParent.rotation;
            gameObject.Deactivate();
        }
        
        public void SetPickable(bool v)
        {
            _canPick = v;
            DelayedCall?.Invoke();
            DelayedCall = null;
        }

        public void TryMoveToContainer(BaseDrawContainer baseDrawContainer)
        {
            InGardener = false;
            InContainer = true;
            baseDrawContainer.TryMoveToContainer(this, OnDestinationComplete);

        }
    }
}
