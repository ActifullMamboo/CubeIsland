using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Rewards;
using _GAME.Scripts.Upgrades;
using _Game.Scripts.View;
using UnityEngine;

namespace _GAME.Scripts.Player
{
    public class PlayerUpgradeReciver : BaseView
    {
        [SerializeField] private List<Upgradable> _upgradables;
        public override void Init()
        {
            base.Init();
        }

        public void UpgradeItem(RewardItem reward)
        {
            var itm = _upgradables.FirstOrDefault(x => x.UpgradeType == reward.UpgradeType);
            if (itm != null) itm.Upgrade();
        }
    }
}
