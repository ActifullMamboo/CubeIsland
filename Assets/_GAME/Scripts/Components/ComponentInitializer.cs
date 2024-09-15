using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.AI.Base;
using _GAME.Scripts.Events;
using _GAME.Scripts.Furnace;
using _GAME.Scripts.Gardens;
using _GAME.Scripts.Other;
using _Game.Scripts.Systems;
using _GAME.Scripts.UI.ScreenSpace;
using _GAME.Scripts.UI.WorldSpace;
using _GAME.Scripts.Upgrades;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.Components
{
    public class ComponentInitializer : MonoBehaviour
    {
        [SerializeField] private GameObject Root;
        [SerializeField] private SoundSystem _soundSystem;
        [SerializeField] private WorldSpace _worldSpaceCanvas;
        [SerializeField] private ScreenSpace _screenSpaceCanvas;
        [SerializeField] private AttackEventController _eventController;

        private List<IComponentInitializer> _components = new();
        private List<ISoundPlayer> _soundPlayers = new();
        private List<IProductionInitializer> _productionInitializers = new();
        private List<ILevelStartComponents> _levelStartComponents = new();
        private List<BaseAI> _bots = new();

        [SerializeField] private List<Upgradable> _upgradables;

        private void Awake()
        {
            
            GetComponentInChildren<LevelManager>().InitStartLevel();
            GetComponentInChildren<SaveSystem>().Init();
            DOTween.Init(true, true, LogBehaviour.ErrorsOnly).SetCapacity(2000, 100);
            _soundPlayers = Root.GetComponentsInChildren<ISoundPlayer>(true).ToList();

            for (var i = 0; i < _soundPlayers.Count; i++) _soundPlayers[i].InitSound(_soundSystem);

            for (var i = 0; i < _upgradables.Count; i++) _upgradables[i].Init();
            _worldSpaceCanvas.Init();
            _screenSpaceCanvas.Init();
            _components = Root.GetComponentsInChildren<IComponentInitializer>().ToList();
            _productionInitializers = Root.GetComponentsInChildren<IProductionInitializer>().ToList();
            _levelStartComponents = GetComponentsInChildren<ILevelStartComponents>().ToList();
            _bots = Root.GetComponentsInChildren<BaseAI>(true).ToList();

            for (var i = 0; i < _levelStartComponents.Count; i++) _levelStartComponents[i].Initialize();
            for (var i = 0; i < _components.Count; i++) _components[i].Initialize();
            for (var i = 0; i < _productionInitializers.Count; i++) _productionInitializers[i].Initialize();

            var gardens = Root.GetComponentsInChildren<Garden>(true);

            if (_eventController) _eventController.InitComponent(gardens.ToList());
        }

        private void Update()
        {
            for (var i = 0; i < _bots.Count; i++) _bots[i].UpdateMovement(Time.deltaTime);
        }
    }

    public interface IComponentInitializer
    {
        public void Initialize();
    }

    public interface ILevelStartComponents
    {
        public void Initialize();
    }
}