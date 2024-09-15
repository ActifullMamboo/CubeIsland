using _GAME.Scripts.Tasks;
using _Game.Scripts.Tools;
using UnityEngine;

namespace _GAME.Scripts.Rewards
{
    public class FurnaceReward : BaseReward
    {
        [SerializeField] private GameObject _furnace;

        public override void Init()
        {
            base.Init();
            if (IsUnlockedRewards[0])
            {
                _furnace.Activate();
            }
            else
            {
                _furnace.Deactivate();
            }
        }

        public override void ReceiveReward(Reward reward)
        {
            base.ReceiveReward(reward);
            _furnace.Activate();
        }
    }
}
