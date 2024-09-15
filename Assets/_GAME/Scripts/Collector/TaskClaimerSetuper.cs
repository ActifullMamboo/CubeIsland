using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Cameras;
using _GAME.Scripts.Components;
using _GAME.Scripts.Rewards;
using _GAME.Scripts.UI.WorldSpace;
using UnityEngine;

namespace _GAME.Scripts.Collector
{
    public class TaskClaimerSetuper : MonoBehaviour, IComponentInitializer
    {
        [SerializeField] WorldSpace _worldSpaceCanvas;
        [SerializeField] RewardHolder _rewardHolder;
        [SerializeField] CameraController _cameraController;
        private List<ITaskClaimer> _tasksComponents = new List<ITaskClaimer>();

        public void Initialize()
        {
            _tasksComponents = GetComponentsInChildren<ITaskClaimer>(true).ToList();
            for (int i = 0; i < _tasksComponents.Count; i++)
            {
                _tasksComponents[i].SetupTasks(_worldSpaceCanvas,_rewardHolder,_cameraController);
            }
        }
    }
    public interface ITaskClaimer
    {
        public void SetupTasks(WorldSpace worldSpace, RewardHolder rewardHolder, CameraController cameraController);
    }
}
