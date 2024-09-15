using System;
using UnityEngine;

namespace _GAME.Scripts.Upgrades
{
    [CreateAssetMenu(fileName = "Data", menuName = "Upgrade", order = 2)]
    public class Upgradable : ScriptableObject
    {
        public Action OnUpgrade;
        public UpgradeType UpgradeType;
        public int UpgradeMaxLevel;
        public int Level;
        public int IncrementOnLevel;
        public int StartLevelCount;

        public void Init()
        {
            Level = PlayerPrefs.GetInt(UpgradeType.ToString(), 0);
        }

        public void Upgrade()
        {
            Level++;

            PlayerPrefs.SetInt(UpgradeType.ToString(), Level);
            OnUpgrade?.Invoke();
        }
    }

    public enum UpgradeType
    {
        Speed,
        ContainerCapacity
    }
}