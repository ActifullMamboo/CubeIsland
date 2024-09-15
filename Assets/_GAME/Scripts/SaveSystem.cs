using System.Collections;
using System.Collections.Generic;
using _GAME.Scripts.Base;
using _GAME.Scripts.Collector;
using _GAME.Scripts.Events;
using _GAME.Scripts.Other;
using _GAME.Scripts.Player;
using _GAME.Scripts.Tasks;
using UnityEngine;

namespace _GAME.Scripts
{
    public class SaveSystem : MonoBehaviour
    {
        private const string DogKey = "Dog";
        private const string WeaponKey = "Weapon";
        private const string Resources = "Resources";
        private const string TaskID = "TaskID";
        private const string RewardID = "RewardID";
        private const string TaskKey = "Task";
        private const string EventKey = "Event";
        private const string GardensKey = "Garden";

        #region MyRegion

        private static string _name;
        private static ES3Settings _settings;

        public void Init()
        {
            _name = LevelManager.NumberOfLevel + "SaveFile.es3";
            ES3.CacheFile(_name);

            _settings = new ES3Settings(_name, ES3.Location.Cache);

            ES3.Save("key", 0, _name, _settings);
            StartCoroutine(AutoSave());
        }


        private IEnumerator AutoSave()
        {
            while (true)
            {
                yield return new WaitForSeconds(3f);
                ES3.DeleteFile();
                ES3.StoreCachedFile(_name);
            }
        }

        public static WeaponRare GetWeaponSaves()
        {
            var type = PlayerPrefs.GetInt(WeaponKey, 0);
            return (WeaponRare)type;
        }

        public static void SaveCurrentWeapon(WeaponRare weaponRare)
        {
            var wpID = (int)weaponRare;

            PlayerPrefs.SetInt(WeaponKey, wpID);
        }

        #endregion

        public static void DeleteKeys()
        {
            ES3.DeleteFile(_name);
        }

        public static void SaveResourcesInContainer(List<FeedItems> feedItems, ContainerType type)
        {
            var container = type.ToString();
            foreach (var item in feedItems)
            {
                var key = Resources + container + item.ItemType;
                var count = item.Count;

                ES3.Save(key, count, _name, _settings);
            }
        }

        public static void SaveResourcesInContainer(FeedItems feedItem, ContainerType type)
        {
            var container = type.ToString();
            var key = Resources + container + feedItem.ItemType;
            var count = feedItem.Count;

            ES3.Save(key, count, _name, _settings);
        }

        public static int LoadResourcesInContainer(FeedItems item, ContainerType type)
        {
            var container = type.ToString();
            var key = Resources + container + item.ItemType;
            return ES3.Load(key, _name, 0);
        }

        public static int GetSavedTask(TaskHolder taskHolder)
        {
            var key = TaskID + taskHolder;
            return ES3.Load(key, _name, 0);
        }

        public static void SaveTaskID(int id, TaskHolder taskHolder)
        {
            var key = TaskID + taskHolder;
            ES3.Save(key, id, _name, _settings);
        }

        public static bool GetClaimedReward(int rewardID)
        {
            var key = RewardID + rewardID;
            return ES3.KeyExists(key, _name);
        }

        public static void SaveReward(int rewardID)
        {
            var key = RewardID + rewardID;
            ES3.Save(key, true, _name, _settings);
        }

        public static int[] GetCurrentTask(TaskHolder taskHolder)
        {
            var key = TaskKey + taskHolder;
            if (ES3.KeyExists(key, _name)) return ES3.Load<int[]>(key, _name);
            return null;
        }

        public static void SaveCurrentTask(TasksOnLevel tasks, TaskHolder taskHolder)
        {
            var key = TaskKey + taskHolder;
            var counts = new int [tasks.Tasks.Count];
            for (var i = 0; i < counts.Length; i++) counts[i] = tasks.Tasks[i].ItemsCount;
            ES3.Save(key, counts, _name, _settings);
        }

        public static void DeleteTaskKey(TaskHolder taskHolder)
        {
            var key = TaskKey + taskHolder;

            ES3.DeleteKey(key, _name, _settings);
            ES3.DeleteKey(key, _name);
        }

        public static void SaveEventState(EventConfig currentEvent)
        {
            var key = EventKey + currentEvent.EventName;
            ES3.Save(key, currentEvent.Passed, _name, _settings);
        }

        public static bool LoadEventState(string eventName)
        {
            var key = EventKey + eventName;
            return ES3.Load(key, _name, false);
        }

        #region buildGardens

        public static bool GetGarden(ItemType itemType)
        {
            var key = itemType.ToString() + LevelManager.NumberOfLevel + GardensKey;
            return ES3.Load(key, _name, false);
        }

        public static void SaveGardenCount(ItemType itemType, int count)
        {
            var key = itemType.ToString() + LevelManager.NumberOfLevel + GardensKey + "NUM";
            ES3.Save(key, count, _name, _settings);
        }

        public static int LoadGardenCount(ItemType itemType)
        {
            var key = itemType.ToString() + LevelManager.NumberOfLevel + GardensKey + "NUM";
            return ES3.Load(key, _name, 0);
        }

        public static void SaveGarden(ItemType itemType)
        {
            var key = itemType.ToString() + LevelManager.NumberOfLevel + GardensKey;

            ES3.Save(key, true, _name, _settings);
        }

        #endregion

        public static void SaveDog()
        {
            PlayerPrefs.SetInt(DogKey, 1);
        }

        public static bool GetDogSave()
        {
            var s = PlayerPrefs.GetInt(DogKey, 0);

            return s > 0;
        }
    }
}