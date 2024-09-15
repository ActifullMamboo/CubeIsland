using System.Collections.Generic;
using _GAME.Scripts.Tasks;
using _GAME.Scripts.UI.ScreenSpace;
using _GAME.Scripts.UI.WorldSpace;
using _Game.Scripts.View;
using UnityEngine;

namespace _GAME.Scripts.Rewards
{
    public class BaseReward : BaseView
    {
        public int[] RewardID;
        public Transform _lookTarget;
        public Transform FollowPoint => _lookTarget;
        protected List<bool> IsUnlockedRewards = new List<bool>();

        public override void Init()
        {
            for (int i = 0; i < RewardID.Length; i++)
            {
                var unlocked = SaveSystem.GetClaimedReward(RewardID[i]);
                IsUnlockedRewards.Add(unlocked);
            }
            base.Init();
        }

        public virtual void ReceiveReward(Reward reward)
        {
            if (reward==null)
            {
                return;
            }
            SaveSystem.SaveReward(reward.RewardID);
        }

        public virtual void GetWorldSpaceCanvas(ScreenSpace screenSpace)
        {
            
        }

        public virtual void SetupPoint(Reward reward)
        {
        }
    }
}
