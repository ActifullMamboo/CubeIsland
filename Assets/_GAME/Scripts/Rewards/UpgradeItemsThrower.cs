using System;
using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Collector;
using _GAME.Scripts.Items;
using _GAME.Scripts.Player;
using _GAME.Scripts.Tasks;
using _Game.Scripts.Tools;
using _GAME.Scripts.UI.ScreenSpace;
using _GAME.Scripts.UI.WorldSpace;
using _GAME.Scripts.Upgrades;
using _Game.Scripts.View;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.Rewards
{
    public class UpgradeItemsThrower : BaseReward
    {
        [SerializeField] private CollisionListener collisionListener;
        [SerializeField] private List<RewardItem> _rewards;
        [SerializeField] private ParticleSystem _shineFX;
        [SerializeField] private PointView _dropPoint;
        private List<ClaimableBonusItem> _items = new();
        private RewardItem _reward;
        private ClaimableBonusItem _bonusItem;
        private ScreenSpace _screenSpace;

        private bool _openedPanel = false;
        public override void GetWorldSpaceCanvas(ScreenSpace screenSpace)
        {
            _screenSpace = screenSpace;
            base.GetWorldSpaceCanvas(screenSpace);
        }
        public override void Init()
        {
            _items = GetComponentsInChildren<ClaimableBonusItem>().ToList();
            _reciver = FindObjectOfType<PlayerUpgradeReciver>();

            for (var i = 0; i < _items.Count; i++) _items[i].Deactivate();
            for (var i = 0; i < _rewards.Count; i++)
            {
                var fx = Instantiate(_shineFX, _items[i].transform);
                fx.transform.localScale = Vector3.one * 2;
                fx.transform.localPosition+=Vector3.up;
                _items[i].Init();
                _items[i].SetRewardType(_rewards[i].UpgradeType);
            }

            base.Init();
        }

        private PlayerUpgradeReciver _reciver;
        private void OpenPanel()
        {
            _openedPanel = true;
            _bonusItem.OnEnterReward(_screenSpace, _reward, _reciver);
        }

        public override void ReceiveReward(Reward reward)
        {
            var conf = _rewards.Find(x => x.RewardID == reward.RewardID);
            _bonusItem = _items.Find(x => x.UpgradeType == conf.UpgradeType);
            _reward = conf;
            _reward.Reward = reward;
            _bonusItem.Activate();
            _bonusItem.JumpTo(_dropPoint, OnPickReward);
            base.ReceiveReward(reward);
            DOVirtual.DelayedCall(1f, OpenPanel);
        }

        private void OnPickReward()
        {
            _openedPanel = false;
            _bonusItem = null;
        }
    }

    [Serializable]
    public class RewardItem
    {
        public Reward Reward;
        public int RewardID;
        public UpgradeType UpgradeType;
    }
}
