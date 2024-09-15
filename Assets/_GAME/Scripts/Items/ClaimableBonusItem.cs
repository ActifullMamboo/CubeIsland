using System;
using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Player;
using _GAME.Scripts.Rewards;
using _GAME.Scripts.Tasks;
using _Game.Scripts.Tools;
using _GAME.Scripts.UI.ScreenSpace;
using _GAME.Scripts.UI.WorldSpace;
using _GAME.Scripts.Upgrades;
using _Game.Scripts.View;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.Items
{
    [Serializable]
    public class BonusItem
    {
        public UpgradeType Type;
        public Mesh Mesh;
        public Material Material;
    }
    public class ClaimableBonusItem : BaseView
    {
        private Action OnClaim;
        private ClaimPanel _claimPanel;
        public UpgradeType UpgradeType;
        private MeshRenderer _meshRenderer;
        private MeshFilter _meshFilter;
        public List<BonusItem> _BonusItems;
        public override void Init()
        {
            base.Init();
            
            _meshRenderer = GetComponentInChildren<MeshRenderer>();
            _meshFilter = GetComponentInChildren<MeshFilter>();
        }
        
        public void OnEnterReward(ScreenSpace screenSpace, RewardItem reward, PlayerUpgradeReciver reciver)
        {
            _claimPanel = screenSpace.GetAvailableClaimPanel();
            _claimPanel.SetupReward(reward.Reward);
            _claimPanel.Show();
            _claimPanel.SetCallback(delegate { ClaimReward(reciver, reward); });
        }

        private void ClaimReward(PlayerUpgradeReciver reciver,RewardItem reward)
        {
            OnClaim?.Invoke();
            gameObject.Deactivate();
            reciver.UpgradeItem(reward);
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

        public void SetRewardType(UpgradeType upgradeType)
        {
            var config = _BonusItems.FirstOrDefault(x => x.Type == upgradeType);
            if (config != null)
            {
                _meshRenderer.material = config.Material;
                _meshFilter.mesh = config.Mesh;
            }
        }
    }
}
