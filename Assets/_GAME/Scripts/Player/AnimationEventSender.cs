using System;
using UnityEngine;

namespace _GAME.Scripts.Player
{
    public class AnimationEventSender : MonoBehaviour
    {
        public Action OnHit;

        public void Hit()
        {
            OnHit?.Invoke();
        }
    }
}