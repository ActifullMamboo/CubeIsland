using UnityEngine;

namespace _GAME.Scripts.Cameras
{
    public class CustomAnchor : MonoBehaviour
    {
        [SerializeField] private Transform _target;
        [SerializeField] private Vector3 _anchor;
        public Transform LookTarget => _target;
        public Vector3 Anchor => _anchor;
    }
}
