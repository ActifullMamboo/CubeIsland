using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Other;
using _GAME.Scripts.UI.WorldSpace;
using _Game.Scripts.View;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI.ProceduralImage;

namespace _GAME.Scripts.UI.ScreenSpace
{
    public class ScreenSpace : BaseView
    {
        private List<ClaimPanel> claimPanels = new();
        [SerializeField] private FadeImage _fadeImage;
        [SerializeField] private WinPanel _winPanel;
        public override void Init()
        {
            claimPanels = GetComponentsInChildren<ClaimPanel>(true).ToList();
    
            for (int i = 0; i < claimPanels.Count; i++)
            {
                claimPanels[i].Init();
            }
            _fadeImage.Init();
            _winPanel.Init();
            _fadeImage.FadeOut();
            base.Init();
        }
        
        public ClaimPanel GetAvailableClaimPanel()
        {
            return claimPanels.FirstOrDefault(p => !p.IsOpened);
        }

        public void FadeIn(float t = 0.5f)
        {
            SaveSystem.DeleteKeys();
            DOVirtual.DelayedCall(t,()=>_fadeImage.FadeIn(LevelManager.LoadNextLevel));
        }

        public WinPanel GetWinPanel()
        {
            return _winPanel;
        }
    }
}
