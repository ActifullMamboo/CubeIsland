
using System;
using _GAME.Scripts.Cameras;
using _Game.Scripts.Tools;
using UnityEngine;
namespace _GAME.Scripts.Tutorials
{
    public class Arrow : MonoBehaviour
    {
        public Transform targetArrow;

        private Transform _target;
      
        public void Show(Transform target)
        {
            targetArrow.Activate();
            _target = target;
        }

        internal void Hide()
        {
            targetArrow.Deactivate();
        }

        private void Update()
        {
            if (_target==null)
            {
                return;
            }

            Vector3 pos = _target.position;
            pos.y = transform.position.y;
            targetArrow.LookAt(pos, Vector3.up);
        }
    }
}