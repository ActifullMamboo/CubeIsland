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
using _Game.Scripts.View;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.Rewards
{
    public class WeaponThrower : BaseReward
    {
        [SerializeField] private List<RewardWeapon> _rewards;
        [SerializeField] private ParticleSystem _shineFX;
        [SerializeField] private PointView _dropPoint;
        private List<ClaimableWeapon> _weapons = new();
        private Reward _reward;
        private ClaimableWeapon _claimableWeapon;
        private ScreenSpace _screenSpace;

        private bool _openedPanel = false;
        public override void GetWorldSpaceCanvas(ScreenSpace screenSpace)
        {
            _screenSpace = screenSpace;
            base.GetWorldSpaceCanvas(screenSpace);
        }

        public override void Init()
        {
            _weapons = GetComponentsInChildren<ClaimableWeapon>().ToList();
            _controller = FindObjectOfType<WeaponController>();

            for (var i = 0; i < _weapons.Count; i++) _weapons[i].Deactivate();
            for (var i = 0; i < _rewards.Count; i++)
            {
                var fx = Instantiate(_shineFX, _weapons[i].transform);
                fx.transform.localScale = Vector3.one * 2;
                fx.transform.localPosition+=Vector3.up;
                _weapons[i].Init();
                _weapons[i].SetRareWeapon(_rewards[i].WeaponRare);
                _weapons[i].ShowWeapon(WeaponType.none);
            }

            base.Init();
        }

        private void Open()
        {
            _openedPanel = true;
            _claimableWeapon.OnEnterReward(_screenSpace, _reward, _controller);
        }

        private WeaponController _controller;
        public override void ReceiveReward(Reward reward)
        {
            var conf = _rewards.Find(x => x.RewardID == reward.RewardID);
            _claimableWeapon = _weapons.Find(x => x.WeaponRare == conf.WeaponRare);
            _reward = reward;
            _claimableWeapon.Activate();
            _claimableWeapon.JumpTo(_dropPoint, OnPickReward);
            base.ReceiveReward(reward);

            DOVirtual.DelayedCall(1f, Open);
        }

        private void OnPickReward()
        {
            _openedPanel = false;
            _claimableWeapon = null;
        }
    }

    [Serializable]
    public class RewardWeapon
    {
        public int RewardID;
        public WeaponRare WeaponRare;
    }
}