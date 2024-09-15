using _GAME.Scripts.Base;
using _GAME.Scripts.Items;
using _Game.Scripts.Tools;
using DG.Tweening;
using UnityEngine;

namespace _GAME.Scripts.AI
{
    public class Skeleton : Enemy
    {
        [SerializeField] private PointView[] _point;
        [SerializeField] private CollectableItem _collectable;
        protected override void Die()
        {
            if (_drop)
            {
                for (int i = 0; i < 10; i++)
                {
                    var item = Instantiate(_collectable);
                    item.Init();
                    item.SetupItemView(ItemType.Bones);
                    item.StartSetup(transform);
                    item.Reset();
                    item.MoveToFreePoint(_point[i], delegate { SetItemPickable(item); }, _point[i].transform);

                    _point[i].SetParent(null);
                }
                
            }

          
           
            base.Die();
            
        }
        
        private void SetItemPickable(CollectableItem item)
        {
            item.transform.DOLocalRotate(Vector3.zero, 0.2f);
            item.transform.DOShakeScale(0.1f, .2f);
            item.SetPickable(true);
        }

        private bool _drop = false;
        public override void SetupDrop()
        {
            _drop = true;
            base.SetupDrop();
        }
    }
}
