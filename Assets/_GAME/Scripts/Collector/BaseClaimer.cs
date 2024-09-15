using _Game.Scripts.View;
using UnityEngine;

namespace _GAME.Scripts.Collector
{
    public class BaseClaimer : BaseView
    {
        [SerializeField] private CollisionListener _collisionListener;

        public override void Init()
        {
            _collisionListener.OnEnter += OnEnterInCollision;
            _collisionListener.OnExit += OnExitCollision;

            base.Init();
        }

        protected virtual void OnEnterInCollision(Collider obj)
        {
           
        }


        protected virtual void OnExitCollision(Collider obj)
        {
            
        }
        public override void OnDestroy()
        {
            base.OnDestroy();
            _collisionListener.OnEnter -= OnEnterInCollision;
            _collisionListener.OnExit -= OnExitCollision;

        }
    }
}
