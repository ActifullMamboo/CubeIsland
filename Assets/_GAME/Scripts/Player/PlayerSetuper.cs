using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Components;
using UnityEngine;

namespace _GAME.Scripts.Player
{
    public class PlayerSetuper : MonoBehaviour, IComponentInitializer
    {
        [SerializeField] private VariableJoystick _joystick;
        private List<IPlayerComponent> _playercomponents = new();

        public void Initialize()
        {
            _playercomponents = GetComponentsInChildren<IPlayerComponent>().ToList();
            for (var i = 0; i < _playercomponents.Count; i++) _playercomponents[i].InitializeComponent(_joystick);
        }
    }

    public interface IPlayerComponent
    {
        public void InitializeComponent(VariableJoystick joystick);
    }
}