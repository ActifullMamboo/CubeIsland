using System;
using _GAME.Scripts.Player;
using _Game.Scripts.Tools;
using Cinemachine;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.Cameras
{
    public enum CameraType
    {
        Head,
        Reward,
        Tutorial,
        Attack
    }
    public class CameraController : MonoBehaviour
    {
        public Action OnMainCameraFocused;
        [SerializeField] private CinemachineVirtualCamera _mainCamera;
        [SerializeField] private float _FOV;
        private float _startFOV;

        private bool _camFree = true;
        [SerializeField] [Space] private CinemachineVirtualCamera _rewardCamera;
        [SerializeField] private CinemachineVirtualCamera _tutorialCamera;
        [SerializeField] private CinemachineVirtualCamera _headCam;
        [SerializeField] private CinemachineVirtualCamera _attackCam;
        [SerializeField] private float _zoomFov;

        private Tween _zoomTween;
        private void Start()
        {
            _startFOV = _mainCamera.m_Lens.FieldOfView;
        }

        // public void FollowTarget(Transform targetObject, float secondsToReturn, Action callback)
        // {
        //     DOVirtual.DelayedCall(0.5f, delegate { DelayedCall(targetObject, secondsToReturn, CameraType.Reward,callback); });
        // }

        private void ActivateMainCamera()
        {
            DOVirtual.DelayedCall(0.55f, () => Callback());
        }

        private void Callback()
        {
            if (_camFree)
            {
                OnMainCameraFocused?.Invoke();

            }
        }
        private Tween _callTw;
        public void FollowTarget(Transform targetObject, float secondsToReturn, CameraType cameraType, Action callback, Action OnFocusedCall = null)
        {
            _camFree = false;
            CinemachineVirtualCamera camera = _rewardCamera;
            if (cameraType == CameraType.Head)
            {
                camera = _headCam;
            }
            else if (cameraType == CameraType.Reward)
            {
                camera = _rewardCamera;

            }
            else if (cameraType == CameraType.Attack)
            {
                camera = _attackCam;
            }
            else if (cameraType == CameraType.Tutorial)
            {
                camera = _tutorialCamera;

            }
            camera.gameObject.Activate();
            MoveController.Block();
            if (targetObject !=null)
            {
                if (targetObject.GetComponent<CustomAnchor>())
                {
                    var t = targetObject.GetComponent<CustomAnchor>().LookTarget;
                    camera.Follow = t;
                }
                else
                {
                    camera.Follow = targetObject;

               
                }
            }
           
            _callTw.Kill();
            float timerSec = secondsToReturn * 0.5f;
            DOVirtual.DelayedCall(timerSec, () => OnFocusedCall?.Invoke());
            _callTw = DOVirtual.DelayedCall(secondsToReturn, () =>
            {
                _camFree = true;
                camera.gameObject.Deactivate();
                MoveController.UnBlock();
                ActivateMainCamera();
                callback?.Invoke();
            }, false);
        }

        public void ScaleIn()
        {
            DOVirtual.Float(_mainCamera.m_Lens.FieldOfView, _FOV, 1f, x => _mainCamera.m_Lens.FieldOfView = x);
        }

        public void ScaleOut()
        {
            DOVirtual.Float(_mainCamera.m_Lens.FieldOfView, _startFOV, 1f, x => _mainCamera.m_Lens.FieldOfView = x);
        }

        public void ZoomIn()
        {
            _zoomTween?.Kill();
            _zoomTween =   DOVirtual.Float(_mainCamera.m_Lens.FieldOfView, _zoomFov, 0.5f, x => _mainCamera.m_Lens.FieldOfView = x).SetEase(Ease.OutSine);
        }

        public void ZoomOut()
        {
            _zoomTween?.Kill();
            _zoomTween =   DOVirtual.Float(_mainCamera.m_Lens.FieldOfView, _startFOV, 0.5f, 
                x => _mainCamera.m_Lens.FieldOfView = x).SetEase(Ease.OutSine);
            
        }
    }
}