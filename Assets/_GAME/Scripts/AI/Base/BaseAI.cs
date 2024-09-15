using System;
using System.Collections.Generic;
using _GAME.Scripts.Player;
using _Game.Scripts.Tools;
using _Game.Scripts.View;
using DG.Tweening;
using Unity.Collections;
using UnityEngine;
using UnityEngine.AI;

namespace _GAME.Scripts.AI.Base
{
    public enum CharacterState
    {
        Idle,
        Moving,
        Running
        
    }

    public enum CharacterType
    {
        Gardener,
        Zombie,
        Skeleton,
        Baran
    }

    public class BaseAI : BaseView
    {
        [SerializeField] private AnimationsController _animationsController;
        [SerializeField] [ReadOnly] private List<VisualAIConfig> ViewConfigs;

        private NavMeshAgent _navMeshAgent;

        protected SkinnedMeshRenderer _meshRenderer;

        protected PointView TargetPoint;
        private PointView _currentPoint;
        protected ParticleSystem _fx;

        public override void Init()
        {
            base.Init();
            _animationsController.Start();
            _meshRenderer = GetComponentInChildren<SkinnedMeshRenderer>();
            _navMeshAgent = GetComponentInChildren<NavMeshAgent>();
            _state = CharacterState.Idle;
        }

        public void DeactivateVisual()
        {
            _meshRenderer.Deactivate();
        }
        protected void HitAction()
        {
            var mat = _meshRenderer.material;
            mat.DOColor(Color.red, 0.1f).SetEase(Ease.Linear).SetLoops(2, LoopType.Yoyo);
        }

        public override void Reset()
        {
            _callback = null;
            TargetPoint = null;
            _currentPoint = null;
            base.Reset();
        }

        protected virtual void Die()
        {
            _animationsController.Die();
        }
        public float GetSpeed()
        {
            return _navMeshAgent.speed;
        }

        protected void SetupCharacter(CharacterType type, WorkerType workerType = WorkerType.none)
        {
            var viewConf = ViewConfigs.Find(c => c.CharacterType == type && workerType == c.WorkerType);
            
            if (viewConf.GMObj!=null)
            {
                for (int i = 0; i < ViewConfigs.Count; i++)
                {
                    ViewConfigs[i].GMObj.Deactivate();
                }
                viewConf.GMObj.Activate();
                return;
            }
            _meshRenderer.material = viewConf.Material;
            _meshRenderer.sharedMesh = viewConf.Mesh;
            if (viewConf.HitFX) _fx = Instantiate(viewConf.HitFX, transform);
        }

        #region Moving

        protected float _stoppingDistance = 0.01f;
        private const float _rotationSpeed = 3600f;
        private Action _callback;
        private CharacterState _state;
        private float _speed;
        private bool _needRotate = true;

        protected void SetStopDistance(float stopDistance, bool defaultValue = false)
        {
            if (defaultValue)
            {
                _stoppingDistance = 0.01f;
                return;
            }

            _stoppingDistance = stopDistance;
        }

        protected virtual void GoTo(Action callback, PointView targetPoint, CharacterState state = CharacterState.Moving, float speed = 1, bool needRotate = true)
        {
            if (targetPoint == null)
            {
                Debug.LogError("Target is null");
                return;
            }

            _animationsController.Animate();
            _callback = callback;
            _needRotate = needRotate;
            TargetPoint = targetPoint;
            if (_currentPoint) _currentPoint.FreePoint();
            _currentPoint = null;


            SetNavMeshAgentFlag(true);
            SetNavMeshDestination(targetPoint.transform.position);
            SetState(state);
            _navMeshAgent.speed = speed;

        }

        protected virtual void Stop()
        {
            SetState(CharacterState.Idle);
            if (_navMeshAgent.enabled) _navMeshAgent.ResetPath();
            SetNavMeshAgentFlag(false);

            if (TargetPoint)
            {
                _currentPoint = TargetPoint;
                if (_needRotate)
                {
                    SetRotation(_currentPoint.transform.rotation);
                }
            }
            //_animationsController.Animate(TargetPoint.AnimationHash);

            SetPosition(_navMeshAgent.transform.position);

            var action = _callback;
            _callback = null;
            action?.Invoke();
            _navMeshAgent.speed = _speed;
        }

        public void ForceMoveTo(Transform target = default)
        {
            var navAgentEnabled = _navMeshAgent.enabled;
            SetNavMeshAgentFlag(false);
            if (target != null) transform.SetPositionAndRotation(target.position, target.rotation);
            SetNavMeshAgentFlag(navAgentEnabled);
        }

        private void SetPosition(Vector3 position)
        {
            transform.position = position;
        }

        private void ChangePosition(Vector3 offset)
        {
            transform.position += offset;
        }

        private void SetRotation(Quaternion rotation)
        {
            transform.rotation = rotation;
        }

        protected void SetNavMeshAgentFlag(bool flag)
        {
            _navMeshAgent.enabled = flag;
        }

        protected void SetNavMeshDestination(Vector3 point)
        {
            _navMeshAgent.SetDestination(point);
        }

        protected void SetState(CharacterState state)
        {
            var lastId = (int)_state;
            _state = state;
            var id = (int)state;
            DOVirtual.Float(lastId, id, 0.2f,
                x => _animationsController.SetSpeed(x));
        }

        public void UpdateMovement(float deltaTime)
        {
            if (_state == CharacterState.Idle) return;
            var navMeh = _navMeshAgent;
            var currentDistance = Vector3.Distance(navMeh.transform.position, navMeh.destination);
            if (currentDistance < _stoppingDistance)
            {
                Stop();
            }

            var offset = (navMeh.steeringTarget - transform.position).normalized * (navMeh.speed * deltaTime);
            if (offset.magnitude >= currentDistance) return;

            ChangePosition(offset);
        }

        protected void SetSpeed(float speed)
        {
            _navMeshAgent.speed = speed;
        }
        public void UpdateRotation(float deltaTime)
        {
            if (_state == CharacterState.Idle) return;
            var navMeshAgent = _navMeshAgent;
            if (navMeshAgent.enabled == false) return;
            if (Vector3.Distance(navMeshAgent.transform.position, navMeshAgent.steeringTarget) > 0.01f)
            {
                var target = navMeshAgent.steeringTarget - navMeshAgent.transform.position;
                navMeshAgent.transform.rotation = Quaternion.Slerp(
                    navMeshAgent.transform.rotation,
                    Quaternion.LookRotation(target),
                    _rotationSpeed * deltaTime);
            }
        }

        #endregion

    }

    [Serializable]
    public class VisualAIConfig
    {
        public Mesh Mesh;
        public Material Material;
        public ParticleSystem HitFX;
        public CharacterType CharacterType;
        public WorkerType WorkerType;
        public GameObject GMObj;

    }
    
}