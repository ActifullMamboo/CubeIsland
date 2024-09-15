using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Gardens;
using _GAME.Scripts.Tasks;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.Rewards
{
    public class GradeneRewards : BaseReward
    {
        [SerializeField] private List<Garden> _gardens;

        public override void Init()
        {
            base.Init();
            
            for (var i = 0; i < _gardens.Count; i++) _gardens[i].RewardID = RewardID[i];
            for (var i = 0; i < IsUnlockedRewards.Count; i++)
                if (IsUnlockedRewards[i])
                    StartUnlock(i);

        }

        private void StartUnlock(int i)
        {
            var gard = _gardens[i];
            if (gard != null)
            {
                _lookTarget.position =
                    new Vector3(gard.transform.position.x, _lookTarget.position.y, gard.transform.position.z);

                DOVirtual.DelayedCall(0.2f, () => gard.StartGardenerWork());
                ;
            }
        }
        public override void ReceiveReward(Reward reward)
        {
            base.ReceiveReward(reward);
            Show(reward.RewardID);
        }

        public override void SetupPoint(Reward reward)
        {
            var gard = _gardens.FirstOrDefault(x => x.RewardID == reward.RewardID);

             _lookTarget.position =
                    new Vector3(gard.transform.position.x, _lookTarget.position.y, gard.transform.position.z);
            base.SetupPoint(reward);
        }

        private void Show(int rewardID)
        {
            var gard = _gardens.FirstOrDefault(x => x.RewardID == rewardID);
           
            if (gard != null)
            {
               
                gard.StartGardenerWork();
            }
        }

    }
}
