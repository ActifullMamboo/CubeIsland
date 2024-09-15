using System;
using System.Collections;
using _Game.Scripts.Systems;
using _Game.Scripts.Tools;
using _GAME.Scripts.Upgrades;
using DG.Tweening;
using JetBrains.Annotations;
using KinematicCharacterController.Examples;
using UnityEngine;

namespace _GAME.Scripts.Player
{
    public class MoveController : AnimationsController, IPlayerComponent, ISoundPlayer
    {
        public Transform _rotationObject;
        [SerializeField] private float _speed = 1;
        [SerializeField] private ExampleCharacterController _character;
        [SerializeField] private Upgradable _speedUpgrade;


        private VariableJoystick _variableJoystick;
        public static bool _blockInput;
        private SoundSystem _soundSystem;
        [SerializeField] [NotNull] private GameObject[] _shoes_1;
        [SerializeField] [NotNull] private GameObject[] _shoes_2;
        public void InitSound(SoundSystem soundSystem)
        {
            _soundSystem = soundSystem;
        }
        public void InitializeComponent(VariableJoystick joystick)
        {
            _variableJoystick = joystick;
            base.Start();
            _blockInput = false;
            _speedUpgrade.OnUpgrade += AddSpeed;
            _speed = _speedUpgrade.StartLevelCount + _speedUpgrade.Level * _speedUpgrade.IncrementOnLevel;

            if (_speedUpgrade.Level==1)
            {
                foreach (var VARIABLE in _shoes_1)
                {
                    VARIABLE.Activate();
                }
                
            }
            else if (_speedUpgrade.Level==2)
            {
                foreach (var VARIABLE in _shoes_2)
                {
                    VARIABLE.Activate();
                }
                
            }
            StartCoroutine(StepsRoutine());
        }

        private void OnDestroy()
        {
            _speedUpgrade.OnUpgrade -= AddSpeed;

        }

        private void AddSpeed()
        {
            _speed = _speedUpgrade.StartLevelCount + _speedUpgrade.Level * _speedUpgrade.IncrementOnLevel;
            if (_speedUpgrade.Level==1)
            {
                foreach (var VARIABLE in _shoes_1)
                {
                    VARIABLE.Activate();
                }
            }
            else if (_speedUpgrade.Level==2)
            {
                foreach (var VARIABLE in _shoes_1)
                {
                    VARIABLE.Deactivate();
                }
                foreach (var VARIABLE in _shoes_2)
                {
                    VARIABLE.Activate();
                }
            }
            _soundSystem.PlaySound(GameSoundType.ItemEquip, transform);
        }

        private void Update()
        {
            if (_blockInput)
                return;

            Move();
        }

        IEnumerator StepsRoutine()
        {
            while (true)
            {
                var moveDirection = new Vector3(_variableJoystick.Direction.x, 0, _variableJoystick.Direction.y);

                yield return new WaitForSeconds(0.3f);
                if (moveDirection.magnitude > 0.1f)
                {
                    _soundSystem.PlaySound(GameSoundType.Steps, transform);

                }
            }
        }

        private void Move()
        {
            var moveDirection = new Vector3(_variableJoystick.Direction.x, 0, _variableJoystick.Direction.y);
            var characterInputs = new PlayerCharacterInputs();

            SetSpeed(moveDirection.normalized.magnitude);
            var dir = Vector2.zero;

            if (moveDirection.magnitude > 0.1f)
            {
                dir = new Vector2(_variableJoystick.Vertical, _variableJoystick.Horizontal).normalized;


                RotateCharacter(moveDirection);
            }

            _character.MaxStableMoveSpeed = _speed;
            characterInputs.MoveAxisForward = dir.x;
            characterInputs.MoveAxisRight = dir.y;

            _character.SetInputs(ref characterInputs);
        }

        private void RotateCharacter(Vector3 moveDirection)
        {
            if (moveDirection == Vector3.zero)
                return;
            var targetLookRotation = Quaternion.LookRotation(moveDirection, Vector3.up);

            _rotationObject.transform.rotation = Quaternion.Lerp(_rotationObject.transform.rotation,
                targetLookRotation, Time.deltaTime * 25);
        }

        public static void UnBlock()
        {
            _blockInput = false;
        }

        public static void Block()
        {
            _blockInput = true;
        }

        public void MoveTo(Transform portalTransform)
        {
            _rotationObject.DOLookAt(portalTransform.position, 0.3f, AxisConstraint.Y);
            SetSpeed(1);
            transform.DOMove(portalTransform.position, 3f).SetEase(Ease.Linear).OnComplete(delegate { SetSpeed(0);} );
        }
    }
}