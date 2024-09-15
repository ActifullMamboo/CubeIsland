using _Game.Scripts.Tools;
using _Game.Scripts.View;
using UnityEngine;

namespace _GAME.Scripts.Furnace
{
    public class FurnaceVisualController : BaseView
    {
        [SerializeField] private GameObject _OnMesh;
        [SerializeField] private GameObject _OffMesh;
        public override void Init()
        {
            base.Init();
        }

        public void VisualChanges(bool state)
        {
            if (state)
            {
                _OffMesh.Deactivate();
                _OnMesh.Activate();
            }
            else
            {
                _OnMesh.Deactivate();
                _OffMesh.Activate();
            }
        }
    }
}
