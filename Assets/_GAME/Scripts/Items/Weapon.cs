using System;
using System.Collections.Generic;
using System.Linq;
using _GAME.Scripts.Base;
using _Game.Scripts.View;
using Unity.Collections;
using UnityEngine;

namespace _GAME.Scripts.Player
{
    public enum WeaponType
    {
        none,
        Axe,
        Pick,
        Sword,
        Scissors,
        Wh
    }
    public enum WeaponRare
    {
        none,
       Wood,
       Stone,
       Iron,
    }
    public class Weapon : BaseView
    {
        [SerializeField, ReadOnly] List<WeaponConfig> _weaponConfigs;
        public WeaponRare WeaponRare{ get; private set; }
        public int HitMultiplier { get; private set; }
        public float AttackSpeed { get; private set; }
        private WeaponType _weaponType;

        private MeshRenderer _meshRenderer;
        private MeshFilter _meshFilter;

        public override void Init()
        {
            base.Init();
            _meshFilter = GetComponentInChildren<MeshFilter>();
            _meshRenderer = GetComponentInChildren<MeshRenderer>();
        }
        
        public void ShowWeapon( WeaponType weaponType)
        {
            var conf = _weaponConfigs.Find(c => c.WeaponType == weaponType);
            _weaponType = weaponType;
            HitMultiplier = conf.HitMultiplier;
            AttackSpeed = conf.AttackSpeed;
            _meshFilter.mesh = conf.Mesh;
            var rareConfig = conf.WeaponRare.FirstOrDefault(x => x.Rare == WeaponRare);
            if (rareConfig != null) _meshRenderer.material = rareConfig.Material;
        }

        public void SetRareWeapon(WeaponRare rare)
        {
            WeaponRare = rare;
        }
    }

    [Serializable]
    public class WeaponConfig
    {
        [Header("Visual"), Space]
        public WeaponType WeaponType;
        public Mesh Mesh;

        public List<WeaponRareMaterial> WeaponRare;
        [Header("WeaponConfig"), Space] 
        public int HitMultiplier;
        public float AttackSpeed;

        [Serializable]
        public class WeaponRareMaterial
        {
            public Material Material;
            public WeaponRare Rare;

        }

    }
}
