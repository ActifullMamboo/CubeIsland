using System;
using System.Collections.Generic;
using _GAME.Scripts.Base;
using _GAME.Scripts.Tasks;
using _Game.Scripts.Tools;
using _Game.Scripts.Ui.Base;
using TMPro;
using Unity.Collections;
using UnityEngine;
using UnityEngine.UI.ProceduralImage;

namespace _GAME.Scripts.UI.WorldSpace
{
    public class TaskItem : BaseUIView
    {
        [SerializeField] private ProceduralImage _image;
        [SerializeField] private Color _textColor;
        [SerializeField] private TextMeshProUGUI _text;
        [SerializeField] [ReadOnly] private List<TaskViewItem> _views;

        public void Show(int count, ItemType itemType)
        {
            var conf = _views.Find(x => x.ItemType == itemType);
            _text.text = count.ToString();
            if (count ==0)
            {
                gameObject.Deactivate();
            }
            _text.color = _textColor;
            _image.sprite = conf.Sprite;
        }

        public void UpdateTask(int count)
        {
            _text.text = count.ToString();
        }

        public void Complete(OneTask taski)
        {
            taski.OnOneTaskComplete -= Complete;
            taski.OnTaskUpdate -= UpdateTask;
            gameObject.Deactivate();
        }
    }

    [Serializable]
    public class TaskViewItem
    {
        public ItemType ItemType;
        public Sprite Sprite;
    }
}