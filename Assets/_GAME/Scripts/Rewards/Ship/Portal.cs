using _GAME.Scripts.Player;
using _Game.Scripts.Tools;
using _GAME.Scripts.UI.ScreenSpace;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.Rewards.Ship
{
   public class Portal : MonoBehaviour
   {
      [SerializeField] private PointView jumpPoint;
      [SerializeField] private Transform sheep;
      [SerializeField] private Transform shiip;

      private void OnTriggerEnter(Collider other)
      {
         if (other.GetComponent<MoveController>())
         {
            var character = other.GetComponent<MoveController>()._rotationObject;
            character.SetParent(jumpPoint.transform);
            character.DOLookAt(jumpPoint.transform.position, 0.3f, AxisConstraint.Y);
            character.DOLocalJump(Vector3.zero, 1,1,1f).SetDelay(2f).SetEase(Ease.Linear).OnComplete(NextLevelMove);
            shiip.Activate();
            shiip.DOLocalMove(Vector3.zero, 2f);
         }
      }

      private void NextLevelMove()
      {
         sheep.DOMove(sheep.forward * 30f, 10f).SetRelative(true);
         FindObjectOfType<ScreenSpace>().FadeIn(2);
         jumpPoint.SetParent(sheep);
         transform.SetParent(null);
      }
   }
}
