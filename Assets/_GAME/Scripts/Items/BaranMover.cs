using System;
using System.Collections.Generic;
using _GAME.Scripts.AI.Base;
using _Game.Scripts.Systems;
using _Game.Scripts.Tools;
using _Game.Scripts.View;
using DG.Tweening;
using UnityEngine;
using Random = UnityEngine.Random;

namespace _GAME.Scripts.Items
{
    public class BaranMover : BaseAI, ISoundPlayer
    {
        // Start is called before the first frame update
        [SerializeField] private List<PointView> _points;
        [SerializeField] private float _workTime = 10f;
        [SerializeField] private InteractionParent _interactionParent;

        [SerializeField] private Material _badMat;
        [SerializeField] private Material _goodMat;
        private SoundSystem _soundSystem;
        public void InitSound(SoundSystem soundSystem)
        {
            _soundSystem = soundSystem;
        }
        private void SetBadMat()
        {
            var materials = _meshRenderer.materials;
            materials[0] = _badMat;
            _meshRenderer.materials = materials;
        }
        private void SetGoodMat()
        {
            var materials = _meshRenderer.materials;
            materials[0] = _goodMat;
            _meshRenderer.materials = materials;
            
        }
        public override void Init()
        {
            _interactionParent.OnInitAction += Init;
            _interactionParent.OnVisualChange += SetBadMat;
            _interactionParent.OnHitAction += HitAction;
            _interactionParent.OnRecovery += SetGoodMat;
            _interactionParent.UnparentCoitainer(transform.parent);
            for (int i = 0; i < _points.Count; i++)
            {
                _points[i].SetParent(transform.parent);
            }
            base.Init();
        
            SetupCharacter(CharacterType.Baran);
            StartWorking();
        }
    
        private void StartWorking()
        {
            var point = _points.RandomValue();
            GoTo(OnArrivedWorkPoint, point, CharacterState.Moving,1,false);
        }
        private void OnArrivedWorkPoint()
        {
            _soundSystem.PlaySound( GameSoundType.BaranBee, transform);
            float time = Random.Range(_workTime * 0.5f, _workTime);
            DOVirtual.DelayedCall(time, StartWorking);
        }

        public override void OnDestroy()
        {
            base.OnDestroy();
            _interactionParent.OnInitAction -= Init;
            _interactionParent.OnVisualChange -= SetBadMat;
            _interactionParent.OnHitAction -= HitAction;
            _interactionParent.OnRecovery -= SetGoodMat;
        }
    }
}
