using System;
using System.Collections;
using _Game.Scripts.Systems;
using _Game.Scripts.Tools;
using KinematicCharacterController.Examples;
using UnityEngine;
using UnityEngine.AI;

namespace _GAME.Scripts.Dog
{
    public class DogController : MonoBehaviour, ISoundPlayer
    {
        private Transform _target;
        [SerializeField] private NavMeshAgent _agent;
        [SerializeField] private Animator _anim;
        private SoundSystem _soundSystem;
        public void InitSound(SoundSystem soundSystem)
        {
            _soundSystem = soundSystem;
            if (!SaveSystem.GetDogSave())
            {
                gameObject.Deactivate();
                return;
            }

            var player = FindObjectOfType<ExampleCharacterController>();
            _target = player.transform;
            _soundSystem.PlaySound(GameSoundType.DogLaugh, transform);

            StartCoroutine(StepsRoutine());
        }
        IEnumerator StepsRoutine()
        {
            while (true)
            {
                yield return new WaitForSeconds(5f);
                var x = Mathf.Clamp01(_agent.velocity.magnitude);

                if (x > 0.1f)
                {
                    _soundSystem.PlaySound(GameSoundType.DogWalk, transform);
                }
                else
                {
                    _soundSystem.PlaySound(GameSoundType.DogLaugh, transform);

                }
            }
        }

        private void Update()
        {
            _agent.SetDestination(_target.position);
            
            var x = Mathf.Clamp01(_agent.velocity.magnitude);
            _anim.SetFloat("Speed",x);
        }

        public void ActivateDog()
        {
            gameObject.Activate();
            var player = FindObjectOfType<ExampleCharacterController>();
            _target = player.transform;
            _soundSystem.PlaySound(GameSoundType.DogLaugh, transform);

            StartCoroutine(StepsRoutine());

            
        }
    }
}
