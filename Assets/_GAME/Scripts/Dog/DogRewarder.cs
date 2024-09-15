using _GAME.Scripts.Rewards;
using _GAME.Scripts.Tasks;
using _Game.Scripts.Tools;
using UnityEngine;

namespace _GAME.Scripts.Dog
{
    public class DogRewarder : BaseReward
    {
        [SerializeField] private DogController _dog;
        [SerializeField] private ParticleSystem _fx;

        public override void ReceiveReward(Reward reward)
        {
            base.ReceiveReward(reward);

            _lookTarget.Deactivate();
            _fx.Play();
            _dog.ActivateDog();
        }
    }
}
