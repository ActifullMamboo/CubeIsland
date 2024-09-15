using System.Collections.Generic;
using _GAME.Scripts.AI;
using _GAME.Scripts.AI.Base;
using _GAME.Scripts.Base;
using _Game.Scripts.Systems;
using _Game.Scripts.Tools;
using _Game.Scripts.View;
using DG.Tweening;
using Unity.Collections;
using UnityEngine;
using MoreMountains.NiceVibrations;


namespace _GAME.Scripts.Player
{
    public enum WeaponOwner
    {
        Player,
        Bot
    }

    public class WeaponController : MonoBehaviour, IPlayerComponent, ISoundPlayer
    {
        [SerializeField] private CollisionListener _collisionListener;
        [SerializeField] private Weapon _playerWeapon;
        [SerializeField] [ReadOnly] private WeaponOwner _weaponOwner = WeaponOwner.Bot;

        [SerializeField] private AnimationEventSender _animationEventSender;
        [SerializeField] private AnimationsController _controller;

        private Tween _attackTween;

        private bool isNearestTargets;
        private bool _canHit = true;

        private List<InteractionParent> _interactionParents = new();
        private InteractionParent _hitParent;
        private Enemy _hitEnemy;
        private List<Enemy> _enemies = new();
        private SoundSystem _soundSystem;
        public void InitSound(SoundSystem soundSystem)
        {
            _soundSystem = soundSystem;
        }
        public void InitializeComponent(VariableJoystick joystick)
        {
            _playerWeapon.Init();
            _playerWeapon.SetRareWeapon(SaveSystem.GetWeaponSaves());
            _animationEventSender.OnHit += LastHit;
            _collisionListener.OnStay += OnStayNearItem;
            _collisionListener.OnEnter += OnEnter;
            _collisionListener.OnExit += OnExit;
        }

        private void OnStayNearItem(Collider col)
        {
            if (col.transform.parent.TryGetComponent(out InteractionParent interactionParent))
            {
                if (interactionParent.IsItemIsActive())
                {
                    if (!isNearestTargets)
                        isNearestTargets = true;
                }
                else
                {
                    isNearestTargets = false;
                    return;
                }

                if (_attackTween != null)
                    if (_attackTween.IsPlaying())
                        return;

                Hit();
                _attackTween?.Kill();
                _attackTween = DOVirtual.DelayedCall(_playerWeapon.AttackSpeed, ResetHit);
            }

            if (_weaponOwner == WeaponOwner.Player)
            {
                if (col.TryGetComponent(out Enemy attacker))
                {
                    if (attacker.Alive)
                    {
                        if (!isNearestTargets)
                            isNearestTargets = true;
                    }
                    else
                    {
                        isNearestTargets = false;
                        return;
                    }
                    
                    if (_attackTween != null)
                        if (_attackTween.IsPlaying())
                            return;

                    Hit();
                    _attackTween?.Kill();
                    _attackTween = DOVirtual.DelayedCall(_playerWeapon.AttackSpeed, ResetHit);
                } 
            }
                
        }

        private void Hit()
        {
            if (!_canHit) return;
            _canHit = false;
            if (_weaponOwner == WeaponOwner.Player)
            {
                MMVibrationManager.Haptic(HapticTypes.SoftImpact);
            }

            _controller.Hit();
        }

        private void ResetHit()
        {
            _canHit = true;
            if (isNearestTargets)
            {
                _attackTween?.Kill();
                _attackTween = DOVirtual.DelayedCall(_playerWeapon.AttackSpeed, ResetHit);

                Hit();
            }
        }

        public void UpgradeWeapon(WeaponRare weaponRare)
        {
            SaveSystem.SaveCurrentWeapon(weaponRare);
            _playerWeapon.SetRareWeapon(weaponRare);
            _soundSystem.PlaySound(GameSoundType.ItemEquip, transform);
        }

        #region MyRegion

        private void LastHit()
        {
            if (_hitParent == null)
            {
                _hitParent = _interactionParents.RandomValue();
            }
            else
            {
                if (!_hitParent.IsItemIsActive())
                {
                    if (_hitParent != null)
                    {
                        while (!_hitParent.IsItemIsActive())
                        {
                            _hitParent = _interactionParents.RandomValue();
                            bool allBreaked = true;
                            for (int i = 0; i < _interactionParents.Count; i++)
                            {
                                if (_interactionParents[i].IsItemIsActive())
                                {
                                    allBreaked = false;
                                    break;
                                }
                            }

                            if (allBreaked)
                            {
                                break;
                            }
                        }
                    }
                }

            }

            if (_hitParent != null)
            {
                if (_hitParent.GetItemType() is ItemType.Coal or ItemType.Iron or ItemType.Stone )
                {
                    _soundSystem.PlaySound(GameSoundType.Stone,transform);

                }
                else if (_hitParent.GetItemType() == ItemType.Tree)
                {
                    _soundSystem.PlaySound(GameSoundType.Wood,transform);

                }
                else if (_hitParent.GetItemType() == ItemType.Wheat)
                {
                    _soundSystem.PlaySound(GameSoundType.Wheat,transform);

                }
                else if (_hitParent.GetItemType() == ItemType.Wool)
                {
                    _soundSystem.PlaySound(GameSoundType.Sheep,transform);
                }
                _hitParent.Hit(_playerWeapon);
            }


            if (_hitEnemy == null)
            {
                _hitEnemy = _enemies.RandomValue();
            }
            else
            {
                if (!_hitEnemy.Alive)
                {
                    if (_hitEnemy != null)
                    {
                        if (!_hitEnemy.Alive)
                        {
                            _hitEnemy = _enemies.RandomValue();

                        }
                    }
                }

            }

            if (_hitEnemy != null)
            {
                if (_hitEnemy.GetEnemyType() == CharacterType.Zombie)
                {
                    _soundSystem.PlaySound(GameSoundType.Zombie,transform);

                }
                else if (_hitEnemy.GetEnemyType() == CharacterType.Skeleton)
                {
                    _soundSystem.PlaySound(GameSoundType.Skelet,transform);

                }
              
                _hitEnemy.Hit();
            }
        }

        private void OnEnter(Collider col)
        {
            if (col.transform.parent.TryGetComponent(out InteractionParent interactionParent))
            {
                if (!_interactionParents.Exists(x => x == interactionParent))
                    _interactionParents.Add(interactionParent);

                if (_weaponOwner == WeaponOwner.Player)
                {
                    var type = WeaponType.none;
                    if (interactionParent.GetItemType() == ItemType.Tree)
                        type = WeaponType.Axe;
                    else if (interactionParent.GetItemType() == ItemType.Wheat)
                        type = WeaponType.Wh;
                    else if (interactionParent.GetItemType() == ItemType.Wool)
                        type = WeaponType.Scissors;
                    else if (interactionParent.GetItemType() is ItemType.Iron or ItemType.Stone or ItemType.Coal)
                        type = WeaponType.Pick;
                    if (SaveSystem.GetWeaponSaves() == WeaponRare.none) type = WeaponType.none;
                    _playerWeapon.ShowWeapon(type);
                }
             
               
            }

            if (_weaponOwner == WeaponOwner.Player)
                if (col.TryGetComponent(out Enemy attacker))
                {
                    if (!_enemies.Exists(x => x == attacker))
                        _enemies.Add(attacker);

                    var type = WeaponType.Sword;

                    if (SaveSystem.GetWeaponSaves() == WeaponRare.none) type = WeaponType.none;
                    _playerWeapon.ShowWeapon(type);
                }
        }

        private void OnExit(Collider col)
        {
            if (col.transform.parent.TryGetComponent(out InteractionParent interactionParent))
            {
                isNearestTargets = false;

                if (_interactionParents.Exists(x => x == interactionParent))
                    _interactionParents.Remove(interactionParent);

                _hitParent = null;
                if (_interactionParents.Count == 0) _playerWeapon.ShowWeapon(WeaponType.none);
            }

            if (_weaponOwner == WeaponOwner.Player)
                if (col.TryGetComponent(out Enemy attacker))
                {
                    isNearestTargets = false;

                    if (_enemies.Exists(x => x == attacker))
                        _enemies.Remove(attacker);
                    _hitEnemy = null;
                    if (_enemies.Count == 0) _playerWeapon.ShowWeapon(WeaponType.none);
                }
        }

        #endregion

        private void OnDestroy()
        {
            _animationEventSender.OnHit -= LastHit;
            _collisionListener.OnStay -= OnStayNearItem;
            _collisionListener.OnEnter -= OnEnter;
            _collisionListener.OnExit -= OnExit;
        }

        public void DisableWeapon()
        {
            isNearestTargets = false;
            _interactionParents.Clear();
            _hitParent = null;
            this.Deactivate();
        }

        public void EnableWeapon(WorkerType workerType)
        {
            _playerWeapon.SetRareWeapon(WeaponRare.Wood);
            var type = WeaponType.none;

            if (workerType == WorkerType.Tree)
            {
                type = WeaponType.Axe;

            }
            else if (workerType == WorkerType.Wheel)
            {
                type = WeaponType.Wh;

            }
            else if (workerType == WorkerType.Wool)
            {
                type = WeaponType.Scissors;

            }
            else if (workerType == WorkerType.Iron)
            {
                type = WeaponType.Pick;

            }
           
            _playerWeapon.ShowWeapon(type);
            this.Activate();
            _hitParent = null;
            _interactionParents.Clear();
        }
    }
}