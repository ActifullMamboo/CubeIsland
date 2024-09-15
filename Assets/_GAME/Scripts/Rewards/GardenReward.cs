using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.BuildZones;
using _GAME.Scripts.Items;
using _GAME.Scripts.Tasks;
using _GAME.Scripts.Tutorials;
using UnityEngine;

namespace _GAME.Scripts.Rewards
{
    public class GardenReward : BaseReward
    {
        [SerializeField] private List<ItemsPlacer> _gardens;
        
        public override void Init()
        {
            base.Init();
            for (var i = 0; i < _gardens.Count; i++) _gardens[i].RewardID = RewardID[i];
            for (var i = 0; i < IsUnlockedRewards.Count; i++)
                if (IsUnlockedRewards[i])
                    Show(i);
                else
                    Hide(i);
        }

        public override void ReceiveReward(Reward reward)
        {
            base.ReceiveReward(reward);
            Show(reward.RewardID);
        }

        private void Show(int rewardID)
        {
            var gard = _gardens.FirstOrDefault(x => x.RewardID == rewardID);
            if (gard != null)
            {
                gard.Open();
                if (gard.GetComponentInChildren<ItemVisualizer>())
                {
                    gard.GetComponentInChildren<ItemVisualizer>().ShowEnabled(0);
                }
            }
        }

        private void Hide(int rewardID)
        {
            _gardens[rewardID].Close();
        }
    }
}