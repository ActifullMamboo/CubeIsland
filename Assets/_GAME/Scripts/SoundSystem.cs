using System;
using System.Collections.Generic;
using _Game.Scripts.Tools;
using _Game.Scripts.Ui.Base;
using UnityEngine;
using UnityEngine.Rendering;

namespace _Game.Scripts.Systems
{
    public enum GameSoundType
    {
        None,
        Tap,
        ButtonClick,
        Window,
        TaskDone,
        ItemEquip,
        PickUp,
        Sheep,
        Steps,
        Stone,
        Wood,
        Wheat,
        Zombie,
        Skelet,
        DogWalk,
        DogLaugh,
        BaranBee,
        HappySeller
    }
    
    [Serializable]
    public class GameSound
    {
        public GameSoundType Type;
        public AudioClip[] Clip;
        [Range(0,1)]
        public float Volume;
    }
    
    public class SoundSystem : MonoBehaviour
    {
        [SerializeField] private List<GameSound> _sounds;
        [SerializeField] private AudioSource _sourceMusic;
        [SerializeField] private AudioSource _sourceSound;

        [SerializeField] private List<AudioSource> _sources;
        private void Init()
        {
            BaseButton.ClickSoundEvent += _ => PlaySound((GameSoundType)_);
            BaseWindow.SoundEvent += _ => PlaySound((GameSoundType)_);
        }

        private void UpdateSoundsSettings()
        {
             //_sourceMusic.mute = _settings.IsMuteMusic;
             //_sourceSound.mute = _settings.IsMuteSound;
        }

		
        public void PlaySound(GameSoundType gameSoundType)
        {
            //if (_settings.IsMuteSound) return;
            var clip = _sounds.Find(s => s.Type == gameSoundType)?.Clip;
            if (clip != null)
            {
                _sourceSound.PlayOneShot(clip.RandomValue());
            }
        }

        public void PlaySound(GameSoundType gameSoundType, Transform target)
        {
            var srs = _sources.Find(x => !x.isPlaying);
            var clip = _sounds.Find(s => s.Type == gameSoundType);
            if (clip != null && srs!=null)
            {
                srs.transform.position = target.position;
                srs.volume = clip.Volume;
                srs.PlayOneShot(clip.Clip.RandomValue());
            }
        }
    }

    public interface ISoundPlayer
    {
        public void InitSound(SoundSystem soundSystem);
    }
}