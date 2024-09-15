using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Base;
using _GAME.Scripts.Tasks;
using _GAME.Scripts.UI.WorldSpace;
using _Game.Scripts.View;
using UnityEngine;

namespace _GAME.Scripts.BuildZones
{
    public class TabletView : BaseView
    {
        public TaskItem _taskItem;
        [SerializeField] private SpriteRenderer _sprite;
        [SerializeField] private List<TaskViewItem> _views;

        public void SetupTask(OneTask task, ItemType type)
        {
            var conf = _views.FirstOrDefault(x => x.ItemType == type);
            if (conf != null) _sprite.sprite = conf.Sprite;

            _taskItem.Show(task.ItemsCount, task.ItemType);
            task.OnTaskUpdate += _taskItem.UpdateTask;
            task.OnOneTaskComplete += _taskItem.Complete;


        }
    }
}
