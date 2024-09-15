using System;
using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.AI;
using _GAME.Scripts.AI.Base;
using _GAME.Scripts.Cameras;
using _GAME.Scripts.Gardens;
using _Game.Scripts.Tools;
using DG.Tweening;
using UnityEngine;
using CameraType = _GAME.Scripts.Cameras.CameraType;

namespace _GAME.Scripts.Events
{
    public class AttackEventController : MonoBehaviour
    {
        [SerializeField] private List<EventConfig> _eventConfigs;
        [SerializeField] private List<PointView> _spawnPoints;
        [SerializeField] private List<PointView> _gardenerRunPoints;
        [SerializeField] private CameraController _camera;
        [SerializeField] private Transform _follow;
        private List<Enemy> _enemies = new List<Enemy>();
        private EventConfig _currentEvent;
        private List<Gardener> _gardeners = new List<Gardener>();

        private Tween _tw;
        private bool customevent = false;
        public void InitComponent(List<Garden> gardens)
        {
            for (int i = 0; i < gardens.Count; i++)
            {
                _gardeners.Add(gardens[i].GetGardener());
            }

            for (int i = 0; i < _eventConfigs.Count; i++)
            {
                _eventConfigs[i].Passed = SaveSystem.LoadEventState(_eventConfigs[i].EventName);
            }

            var ev = _eventConfigs.FirstOrDefault(e => !e.Passed);

            if (ev != null)
            {
                if (customevent)
                {
                    return;

                }

                _currentEvent = ev;
                _tw = DOVirtual.DelayedCall(_currentEvent.TimeForEventSinceLevelStart, StartEvent);
            }
               
        }

        private void StartEvent()
        {
            var activatedG = _gardeners.FindAll(x => x.Activated);

            if (activatedG.Count <2)
            {
                _tw = DOVirtual.DelayedCall(_currentEvent.TimeForEventSinceLevelStart, StartEvent);
            }
            else
            {
                _camera.FollowTarget(_follow, 3f, CameraType.Attack, null,Spawn);
            }
           
        }

        private void Spawn()
        {
            Enemy ene = null;
            for (int i = 0; i < _gardeners.Count; i++)
            {
                if (!_gardeners[i].Activated)
                    continue;
                var en = _currentEvent.EnemyPrefab;

                var pos = _spawnPoints.RandomValue();
                var spawnedEnemy = Instantiate(en, pos.transform.position, Quaternion.identity, transform);
                spawnedEnemy.Init();
                spawnedEnemy.SetParams(_gardeners[i], 1);
                _gardeners[i].Panic(_gardenerRunPoints);
                _enemies.Add(spawnedEnemy);
                spawnedEnemy.OnDie += EnemyDie;
                ene = spawnedEnemy;
            }
            if (ene != null && ene.IsSkelet())
            {
                ene.SetupDrop();
            }
        }

        public void RunSkeletEvent()
        {
            _tw.Kill(false);
            _currentEvent = _eventConfigs.Find(e => e.custom && !e.Passed);
            _tw = DOVirtual.DelayedCall(_currentEvent.TimeForEventSinceLevelStart, StartEvent);
            customevent = true;
        }
        private void EnemyDie(Enemy enemy)
        {
            enemy.OnDie -= EnemyDie;

            _enemies.Remove(enemy);

            if (_enemies.Count==0)
            {
                _currentEvent.Passed = true;
                SaveSystem.SaveEventState(_currentEvent);
                _currentEvent = _eventConfigs.FirstOrDefault(e => !e.Passed && !e.custom);

                if (_currentEvent != null) _tw = DOVirtual.DelayedCall(_currentEvent.TimeForEventSinceLevelStart, StartEvent);
            }
        }

    }
    [Serializable]
    public class EventConfig
    {
        public string EventName;
        public bool Passed;
        public float TimeForEventSinceLevelStart;
        public Enemy EnemyPrefab;
        public bool custom;
    }
}
