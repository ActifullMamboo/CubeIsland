using System;
using _GAME.Scripts.Cameras;
using KinematicCharacterController.Examples;
using UnityEngine;

namespace _GAME.Scripts
{
    public class CameraScaler : MonoBehaviour
    {
        private CameraController _cameraController;
        private void Start()
        {
            _cameraController = FindObjectOfType<CameraController>();
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.GetComponent<ExampleCharacterController>())
            {
                _cameraController.ScaleIn();
            }
        }

        private void OnTriggerExit(Collider other)
        {
            if (other.GetComponent<ExampleCharacterController>())
            {
                _cameraController.ScaleOut();
            }
            
        }
    }
}
