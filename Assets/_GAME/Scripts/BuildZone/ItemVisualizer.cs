using _Game.Scripts.Tools;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.BuildZones
{
    public class ItemVisualizer : MonoBehaviour
    {
        [SerializeField] private GameObject _fx;
        private GameObject fx;
        
        public void ShowEnabled(float delay)
        {
            gameObject.Deactivate();
            fx = Instantiate(_fx, transform);
            fx.transform.localPosition += Vector3.up;
            fx.transform.SetParent(null);
            fx.Deactivate();
            transform.localScale = new Vector3(1, 0, 1);
            DOVirtual.DelayedCall(delay, Appear);
           
        }

        private void Appear()
        {
            gameObject.Activate();

           fx.Activate();
            transform.DOScale(Vector3.one, 0.56f).SetEase(Ease.InSine);
            
        }
    }
}
