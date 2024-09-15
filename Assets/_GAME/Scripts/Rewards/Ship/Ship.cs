using System.Collections.Generic;
using _GAME.Scripts.Collector;
using _GAME.Scripts.Player;
using _GAME.Scripts.Tasks;
using _Game.Scripts.Tools;
using _GAME.Scripts.UI.ScreenSpace;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.Rewards.Ship
{
    public class Ship : BaseReward
    {
        [SerializeField] private GameObject portal;
        [SerializeField] private MoveController player;

        private ScreenSpace _screenSpace;
        public override void Init()
        {
            base.Init();
        }
        public override void GetWorldSpaceCanvas(ScreenSpace screenSpace)
        {
            _screenSpace = screenSpace;
            base.GetWorldSpaceCanvas(screenSpace);
        }
        public override void ReceiveReward(Reward reward)
        {
            base.ReceiveReward(reward);
            BuildNextPart();
        }

        private void BuildNextPart()
        {
            var winPanel = _screenSpace.GetWinPanel();
            winPanel.SetCallback(FinishScene);
            winPanel.Open();
            portal.Activate();
          
        }

        private void FinishScene()
        {
            MoveController.Block();
            player.MoveTo(portal.transform);

        }
    }
}