using UnityEngine;

namespace _GAME.Scripts.Containers
{
    public class GardenContainer : BaseDrawContainer
    {
        [SerializeField] private PointView _dropPoint;

        public PointView DropPoint()
        {
            return _dropPoint;
        }

      
    }
}