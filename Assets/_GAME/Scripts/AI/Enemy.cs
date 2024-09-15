using System;
using _GAME.Scripts.AI.Base;
using _GAME.Scripts.Game;
using _Game.Scripts.Tools;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.AI
{
    public class Enemy : BaseAI, IAttacker
    {
        public Action<Enemy> OnDie;

        [SerializeField] private CharacterType _characterType;
        [SerializeField] private HealthBar _healthBar;
        [SerializeField] private int _attacksToDie = 3;
        private int _baseAttacksToDie;
        private Gardener _target;
        [SerializeField] private ParticleSystem _dieFx;
        public bool Alive { get; private set; }
        [SerializeField] private AudioSource _source;
        [SerializeField] private AudioClip initSound;
        [SerializeField] private AudioClip dieSound;

        public override void Init()
        {
            base.Init();
            Alive = true;

            _baseAttacksToDie = _attacksToDie;
            SetupCharacter(_characterType);
        }

        public void SetParams(Gardener target, float distance)
        {
            _target = target;
            SetStopDistance(distance);
            SetState(CharacterState.Running);
        }

        public void Update()
        {
            if (_target == null) return;
            var distance = Vector3.Distance(transform.position, _target.transform.position);
            GoTo(_target.transform);

            if (distance < _stoppingDistance)
            {
                SetSpeed(_target.GetSpeed() - distance * 0.2f);
                return;
            }

            SetSpeed(_target.GetSpeed() + distance * 0.2f);
        }

        private void GoTo(Transform targetPoint)
        {
            SetNavMeshAgentFlag(true);
            SetNavMeshDestination(targetPoint.position);
        }

        protected override void Die()
        {
            _source.PlayOneShot(dieSound);

            OnDie?.Invoke(this);
            base.Die();
            _dieFx.transform.SetParent(null);
            _dieFx.Play();
            DeactivateVisual();
        }

        public void Hit()
        {
            _source.PlayOneShot(initSound);
            _attacksToDie -= 1;
            var dam = _attacksToDie / (float)_baseAttacksToDie;
            _healthBar.TakeDamage(dam);
            _fx.Play();
            HitAction();
            if (_attacksToDie <= 0)
            {
                Alive = false;
                _target.Normalize();
                _target = null;
                Die();
                DOVirtual.DelayedCall(5f, () => gameObject.Deactivate());
            }
        }

        public CharacterType GetEnemyType()
        {
            return _characterType;
        }

        public bool IsSkelet()
        {
            return _characterType == CharacterType.Skeleton;
        }

        public virtual void SetupDrop()
        {
        }
    }
    public interface IAttacker
    {
        public void Hit();
          
    }
}