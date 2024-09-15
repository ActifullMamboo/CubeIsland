using System;
using System.Collections.Generic;
using _GAME.Scripts.AI.Base;
using _GAME.Scripts.Containers;
using _GAME.Scripts.Items;
using _GAME.Scripts.Player;
using _Game.Scripts.Tools;
using _Game.Scripts.View;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.AI
{
    public class Gardener : BaseAI
    {
        private enum WorkState
        {
            Waiting,
            MoveToWork,
            Working,
            Collect,
            MoveToContainer,
            Panic
        }

        [SerializeField] private CharacterType _characterType;
        [SerializeField] private WeaponController _weaponController;
        [SerializeField] private float _workTime = 2f;
        [SerializeField] private PointView[] _collectPoint;
        [SerializeField] private WorkerType _workerType;
        
        private List<InteractionParent> _gardenItems;
        private List<PointView> _runPoints;
        
        private InteractionParent _workItem;
        private GardenContainer _gardenContainer;
        private WorkState _workState = WorkState.Waiting;
        private List<CollectableItem> _collectableItem = new List<CollectableItem>();
        private bool _activated = false;

        private Tween _call;
        public bool Activated => _activated;
        public override void Init()
        {
            base.Init();
            _weaponController.InitializeComponent(null);
            _weaponController.DisableWeapon();

            SetupCharacter(_characterType, _workerType);
        }

        public void InitWorker(GardenContainer gardenContainer, List<InteractionParent> items)
        {
            _gardenItems = items;
            _gardenContainer = gardenContainer;
            _gardenContainer.FirstPoint.OnFree += StartWorking;
        }

        #region working

        

        public void StartWorking(PointView point)
        {
            if (!_activated) return;
            if (_workState is not WorkState.Waiting)
                return;
            _workItem = GetClosestTarget(_gardenItems, _workItem);
            if (_workItem == null) _workState = WorkState.Waiting;
            _workState = WorkState.MoveToWork;
            if (_collectableItem.Count>0)
            {
                for (int i = 0; i < _collectableItem.Count; i++)
                {
                    _collectableItem[i].TryMoveToContainer(_gardenContainer);

                }
                _collectableItem.Clear();
            }
           
            GoTo(OnArrivedWorkPoint, _workItem.WorkPoint());
        }

        private void OnArrivedWorkPoint()
        {
            _weaponController.EnableWeapon(_workerType);
            _workState = WorkState.Working;
            _call = DOVirtual.DelayedCall(_workTime, OnCompleteWork);
        }

        private void OnCompleteWork()
        {
            _weaponController.DisableWeapon();

            _workState = WorkState.Collect;
            var point = _workItem.GetDroppedItemPoint();

            if (point.Count == 0)
            {
                StartNewWork();
                return;
            }

            _workState = WorkState.Collect;

            GoTo(OnComeToItem, point[0]);
        }

        private void StartNewWork()
        {
            _workState = WorkState.Waiting;
            if (_gardenContainer.IsFull())
                return;
            StartWorking(null);
        }

        private void OnComeToItem()
        {
            List<PointView> points = new List<PointView>();
            for (int i = 0; i < _gardenItems.Count; i++)
            {
                points.AddRange(_gardenItems[i].GetDroppedItemPoint());
            }
            for (int i = 0; i < points.Count; i++)
            {
                var itm = (CollectableItem)points[i].Item;
                _collectableItem.Add(itm);
            }
            if (_collectableItem == null)
            {
                StartNewWork();
                return;
            }

            for (int i = 0; i < _collectableItem.Count; i++)
            {
                _collectableItem[i].MoveToGardener(_collectPoint[i], null, _collectPoint[i].transform);

            }
            _call= DOVirtual.DelayedCall(0.2f, OnCollectItem);
        }

        private void OnCollectItem()
        {
            if (_collectableItem == null)
            {
                StartNewWork();
                return;
            }

            _workState = WorkState.MoveToContainer;

            GoTo(OnComesToGardenContainer, _gardenContainer.DropPoint());
        }

        private void OnComesToGardenContainer()
        {
            if (_collectableItem == null)
            {
                StartNewWork();
                return;
            }
            int alailablePoints = _gardenContainer.GetAvailablePoints();
            int count = Mathf.Min(alailablePoints, _collectableItem.Count);
            for (int i = 0; i < count; i++)
            {
                _collectableItem[i].TryMoveToContainer(_gardenContainer);

            }
            _collectableItem.RemoveRange(0,count);

            _call =  DOVirtual.DelayedCall(0.3f, StartNewWork);
        }

        private InteractionParent GetClosestTarget(List<InteractionParent> targets, InteractionParent lastTarget)
        {
            InteractionParent tMin = null;
            var minDist = Mathf.Infinity;
            var currentPos = transform.position;
            foreach (var t in targets)
            {
                if (lastTarget != null)
                    if (t == lastTarget)
                        continue;

                var dist = Vector3.Distance(t.transform.position, currentPos);
                if (dist < minDist)
                {
                    tMin = t;
                    minDist = dist;
                }
            }

            return tMin;
        }
        #endregion

        public void Panic( List< PointView> runPoints)
        {
            _call?.Kill();
            Reset();
            _activated = false;
            _runPoints = runPoints;
            _workState = WorkState.Panic;
            SetState(CharacterState.Running);
            GoTo(OnRunPoint,runPoints.RandomValue());
        }

        private void OnRunPoint()
        {
            DOVirtual.DelayedCall(0.2f, RunNextPoint);
        }

        private void RunNextPoint()
        {
            GoTo(OnRunPoint,_runPoints.RandomValue());

        }
        public void Normalize()
        {
            _activated = true;
            _workState = WorkState.Waiting;
            StartWorking(null);

        }
        public void DeactivateWorker()
        {
            gameObject.Deactivate();
            _activated = false;
        }
        public void ActivateWorker()
        {
            gameObject.Activate();
            _activated = true;
        }
    }

    public enum WorkerType
    {
        none,
        Tree,
        Wheel,
        Wool,
        Iron
    }

}