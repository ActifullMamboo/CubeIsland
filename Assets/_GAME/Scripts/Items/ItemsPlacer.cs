using _GAME.Scripts.BuildZones;
using _GAME.Scripts.Components;
using _Game.Scripts.Tools;
using UnityEngine;

namespace _GAME.Scripts.Items
{
    public class ItemsPlacer : MonoBehaviour, IComponentInitializer
    {
        public int RewardID;
        [SerializeField] private BuildZone buildZone;

        public void Initialize()
        {
            buildZone.Init();
        }

        public void Open()
        {
            buildZone.Activate();
        }

        public void Close()
        {
            buildZone.Deactivate();
        }
    }
}