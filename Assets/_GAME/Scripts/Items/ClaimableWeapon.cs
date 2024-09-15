using System;
using _GAME.Scripts.Player;
using _GAME.Scripts.Tasks;
using _Game.Scripts.Tools;
using _GAME.Scripts.UI.ScreenSpace;
using _GAME.Scripts.UI.WorldSpace;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.Items
{
    public class ClaimableWeapon : Weapon
    {
        private Action OnClaim;
        private ClaimPanel _claimPanel;

        public override void Init()
        {
            base.Init();
        }


        public void OnEnterReward(ScreenSpace screenSpace, Reward reward, WeaponController weaponController)
        {
            _claimPanel = screenSpace.GetAvailableClaimPanel();
            _claimPanel.SetupReward(reward); 
            _claimPanel.Show();
            _claimPanel.SetCallback(delegate { ClaimReward(weaponController); });
        }

        private void ClaimReward(WeaponController weaponController)
        {
            OnClaim?.Invoke();
            gameObject.Deactivate();
            weaponController.UpgradeWeapon(WeaponRare);
        }

        public void JumpTo(PointView dropPoint, Action callback)
        {
            OnClaim = callback;
            transform.DOJump(dropPoint.transform.position, 2f, 1, 1f).SetEase(Ease.Linear).OnComplete(LoopRotate);
        }

        private void LoopRotate()
        {
            transform.DOLocalRotate(Vector3.up * 360, 5f, RotateMode.FastBeyond360).SetEase(Ease.Linear)
                .SetLoops(-1, LoopType.Restart);
        }

        public void SetupVisualWeapons()
        {
            throw new NotImplementedException();
        }
    }
}