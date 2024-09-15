using System;
using System.Collections.Generic;
using _GAME.Scripts.Base;
using _GAME.Scripts.Cameras;
using _GAME.Scripts.Collector;
using _GAME.Scripts.Player;
using DG.Tweening;
using UnityEngine;
using CameraType = _GAME.Scripts.Cameras.CameraType;

namespace _GAME.Scripts.Tutorials
{
    public enum TutorialStep
    {
        ShowHead,
        Show,
        GetResourceTree,
        GetResourceWheel,
        TaskDone
    }

    public class Tutorial : MonoBehaviour
    {
        public List<TutorialConfig> _configs;
        private TutorialConfig _currentConfig;
        private int _tutorStep;
        public Arrow _arrow;
        public CameraController _cam;
        [SerializeField] private PlayerContaineer _playerContaineer;

        private void Start()
        {
            if (PlayerPrefs.GetInt("TUTORIAL DONE") > 0) return;
            _tutorStep = PlayerPrefs.GetInt("TUTORID", 0);
            _currentConfig = _configs[_tutorStep];

            if (_currentConfig.AutomateStart) DOVirtual.DelayedCall(2, StartStep);
        }

        private void RunNextStep()
        {
            _tutorStep++;

            _currentConfig = _configs[_tutorStep];
            PlayerPrefs.SetInt("TUTORID", _tutorStep);

            if (_currentConfig == null) PlayerPrefs.SetInt("TUTORIAL DONE", 1);
            if (_currentConfig is { AutomateStart: true }) StartStep();
        }

        private void StartStep()
        {
            if (_currentConfig.Step == TutorialStep.ShowHead)
            {
                if (_currentConfig.CameraNeed)
                {
                    _cam.FollowTarget(_currentConfig.TargetObject, 2f, CameraType.Head, RunNextStep);

                }
                _arrow.Hide();

            }
            else if (_currentConfig.Step == TutorialStep.Show)
            {
                var target = _currentConfig.TargetObject;
                _arrow.Show(target);
                if (_currentConfig.CameraNeed)
                {
                    _cam.FollowTarget(target, 2f, CameraType.Tutorial, RunNextStep);

                }
            }
            else if (_currentConfig.Step == TutorialStep.GetResourceTree)
            {
                if (_currentConfig.TargetObject!=null)
                {
                    _arrow.Show(_currentConfig.TargetObject);
                }
                _playerContaineer.OnGetResource(RunNextStep, _currentConfig.COUNT, ItemType.Tree);
                if (_currentConfig.TaskClaimer!=null)
                {
                    _currentConfig.TaskClaimer.OnTaskDone += OnTaskDone;

                }
            }
            else if (_currentConfig.Step == TutorialStep.GetResourceWheel)
            {
                if (_currentConfig.TargetObject!=null)
                {
                    _arrow.Show(_currentConfig.TargetObject);
                }
                _playerContaineer.OnGetResource(RunNextStep, _currentConfig.COUNT, ItemType.Wheat);
                if (_currentConfig.TaskClaimer!=null)
                {
                    _currentConfig.TaskClaimer.OnTaskDone += OnTaskDone;

                }
            }
        }

        private void OnTaskDone(TaskClaimer claimer)
        {
            claimer.OnTaskDone -= OnTaskDone;
            RunNextStep();
        }

        [Serializable]
        public class TutorialConfig
        {
            public int COUNT;
            public bool AutomateStart;
            public bool CameraNeed = true;
            public TutorialStep Step;
            public Transform TargetObject;
            public TaskClaimer TaskClaimer;
        }

        public void StartTutor(TutorialStep showBuildZone)
        {
            _currentConfig = _configs.Find(x => x.Step == showBuildZone);
            _arrow.Show(_currentConfig.TargetObject);
            RunNextStep(); 
        }
    }
}