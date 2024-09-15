using System;
using System.Collections.Generic;
using _GAME.Scripts.Base;
using _GAME.Scripts.Items;
using _Game.Scripts.View;
using UnityEngine;

namespace _GAME.Scripts.Collector
{
    public class Collector : MonoBehaviour
    {
    }

    [Serializable]
    public class FeedItems
    {
        public int Count;
        public ItemType ItemType;
        public List<CollectableItem> items;
    }
}