using _GAME.Scripts.Base;
using UnityEngine;

namespace _GAME.Scripts.Furnace
{
    public class FurnacePoint : PointView
    {
        [SerializeField] private ItemType _itemType;
        public ItemType ItemTYpe => _itemType;
    }
}