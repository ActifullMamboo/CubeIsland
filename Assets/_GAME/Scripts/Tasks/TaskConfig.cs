using System;
using System.Collections.Generic;
using _GAME.Scripts.Base;
using _GAME.Scripts.Collector;
using UnityEngine;

namespace _GAME.Scripts.Tasks
{
    [CreateAssetMenu(fileName = "Level", menuName = "Tasks", order = 1)]
    public class TaskConfig : ScriptableObject
    {
        public List<TasksOnLevel> TasksOnLevel;
    }

    [Serializable]
    public class TasksOnLevel
    {
        public Action OnCompletedPart;
        public int TaskID;
        public List<OneTask> Tasks;
        public Reward Reward;
    }

    [Serializable]
    public class OneTask
    {
        public Action<int> OnTaskUpdate;
        public Action<OneTask> OnOneTaskComplete;
        public ItemType ItemType;
        public int ItemsCount;
    }
    
    [Serializable]
    public class Reward
    {
        public int RewardID;
        public string RewardText;
        public Sprite RewardSprite;
        public bool NeedCameraFocus;
        public string DescriptionText;

    }
}