using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Cameras;
using _GAME.Scripts.Components;
using _Game.Scripts.Systems;
using _GAME.Scripts.Tasks;
using _GAME.Scripts.UI.ScreenSpace;
using DG.Tweening;
using UnityEngine;
using CameraType = _GAME.Scripts.Cameras.CameraType;

namespace _GAME.Scripts.Rewards
{
    public class RewardHolder : MonoBehaviour, IComponentInitializer
    {
        private List<BaseReward> _rewards = new();
        [SerializeField] private ScreenSpace _screenSpace;
        [SerializeField] private CameraController _cameraController;

        public void Initialize()
        {
            _rewards = GetComponentsInChildren<BaseReward>().ToList();
            for (var i = 0; i < _rewards.Count; i++)
            {
                _rewards[i].Init();
                _rewards[i].GetWorldSpaceCanvas(_screenSpace);
            }
        }

        public void ClaimReward(Reward reward, float delay)
        {
            var baseReward = _rewards.Find(x => x.RewardID.Any(r => r == reward.RewardID));
            if (baseReward == null) return;
            if (reward.NeedCameraFocus)
            {
                if (baseReward.FollowPoint == null)
                {
                    baseReward.ReceiveReward(reward);
                    return;
                }

                DOVirtual.DelayedCall(delay, delegate { RewardLook(baseReward, reward); });
            }
            else
            {
                baseReward.ReceiveReward(reward);
            }
        }

        private void RewardLook(BaseReward baseReward, Reward reward)
        {
            baseReward.SetupPoint(reward);
            _cameraController.FollowTarget(baseReward.FollowPoint, 2, CameraType.Reward,null,()=>baseReward.ReceiveReward(reward) );
        }

      
    }
}