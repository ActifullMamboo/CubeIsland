using _GAME.Scripts.BuildZones;
using _GAME.Scripts.Collector;
using _GAME.Scripts.Other;
using _GAME.Scripts.Tasks;
using _GAME.Scripts.Events;

using UnityEngine;

namespace _GAME.Scripts.Rewards
{
    public class TaskHolderRewards : BaseReward
    {
        [SerializeField] private TaskClaimer _trader;
        [SerializeField] private AttackEventController _controller;

        public override void Init()
        {
            base.Init();
            if (IsUnlockedRewards.Count>0)
            {
                if (IsUnlockedRewards[0])
                {
                    OpenTrader();
                    if (_controller!=null)
                    {
                        _controller.RunSkeletEvent();

                    }
                }
            }
            
        }

        public override void ReceiveReward(Reward reward)
        {
            base.ReceiveReward(reward);
            OpenTrader();
            if (_controller!=null)
            {
                _controller.RunSkeletEvent();

            }

        }

        private void OpenTrader()
        {
            _trader.Show();
            if (_trader.GetComponentInChildren<ItemVisualizer>())
            {
                _trader.GetComponentInChildren<ItemVisualizer>().ShowEnabled(0);
            }
        }
    }
}
