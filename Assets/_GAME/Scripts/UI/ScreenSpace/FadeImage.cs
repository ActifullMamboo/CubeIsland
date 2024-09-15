using System;
using _Game.Scripts.Tools;
using _Game.Scripts.Ui.Base;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI.ProceduralImage;

namespace _GAME.Scripts.UI.ScreenSpace
{
    public class FadeImage : BaseUIView
    {
        [SerializeField] private float _fadeTime;
        
        private ProceduralImage _proceduralImage;

        public void Init()
        {
            _proceduralImage = GetComponent<ProceduralImage>();
        }

        public void FadeIn(Action onFade)
        {
            gameObject.Activate();
            _proceduralImage.BorderWidth = 1;
            DOVirtual.Float(1, 1500, _fadeTime, x=>_proceduralImage.BorderWidth =x).SetEase(Ease.InSine).OnComplete(()=>
            {
                onFade?.Invoke();
            });
        }

        public void FadeOut()
        {
            DOVirtual.Float(1500, 1, _fadeTime, x=>_proceduralImage.BorderWidth =x).SetEase(Ease.InSine).OnComplete(()=>
            {
                gameObject.Deactivate();
            });

        }
    }
}
