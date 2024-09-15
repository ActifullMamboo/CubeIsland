using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.AI;
using _GAME.Scripts.Base;
using _GAME.Scripts.Collector;
using _GAME.Scripts.Components;
using _GAME.Scripts.Containers;
using _GAME.Scripts.Items;
using _GAME.Scripts.Rewards;
using _Game.Scripts.Tools;
using _GAME.Scripts.UI.WorldSpace;
using _Game.Scripts.View;
using UnityEngine;

namespace _GAME.Scripts.Gardens
{
    public class Garden : BaseView
    {
        private List<InteractionParent> _interactionParents = new List<InteractionParent>();
        
        [SerializeField] private Gardener _gardener;
        [SerializeField] private ItemType _collectItemType;
        [SerializeField] private GardenContainer _gardenContainer;

        public int RewardID;

        public override void Init()
        {
            if (GetComponentInChildren<BaranMover>())
            {
                var barans = GetComponentsInChildren<BaranMover>();
                for (int i = 0; i < barans.Length; i++)
                {
                    barans[i].Init();
                }
            }
            _interactionParents = GetComponentsInChildren<InteractionParent>(true).ToList();
            for (int i = 0; i < _interactionParents.Count; i++)
            {
                _interactionParents[i].SetItemType(_collectItemType);
                _interactionParents[i].Init();
            }
            _gardenContainer.SetupCollectionType(_collectItemType);
            _gardenContainer.Init();
            _gardenContainer.Deactivate();
            _gardener.Init();
            _gardener.InitWorker(_gardenContainer,_interactionParents);
            base.Init();
            _gardener.DeactivateWorker();

           
        }

        public void StartGardenerWork()
        {
            _gardenContainer.Activate();
            _gardener.ActivateWorker();
            _gardener.StartWorking(null);
            

        }

        public Gardener GetGardener()
        {
            return _gardener;
        }

        public ItemType GetGardenType()
        {
            return _collectItemType;
        }
    }
}
