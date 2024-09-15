using System;
using _Game.Scripts.Tools;
using UnityEngine;
using UnityEngine.UI;

namespace _GAME.Scripts.Game
{
    public class HealthBar : MonoBehaviour
    {
        [SerializeField] private Slider slider;

        private void LateUpdate()
        {
            transform.eulerAngles = Camera.main.transform.eulerAngles;
        }

        public void TakeDamage(float hp)
        {
            gameObject.Activate();;

            slider.value = hp;
            if (!(hp <= 0)) return;
            gameObject.Deactivate();;
        }
    }
}
