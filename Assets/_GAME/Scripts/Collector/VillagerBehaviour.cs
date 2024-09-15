using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VillagerBehaviour : MonoBehaviour
{
    private int _maxPhase = 1;
    private float coef;
    private Vector3 incr;
    [SerializeField] private ParticleSystem _fx;
    public void SetMaxPhase(int phase)
    {
        _maxPhase = phase;
        coef = 1 /(float) _maxPhase;
        incr = Vector3.one * 0.5f * coef;
        transform.localScale = Vector3.one*0.5f;
    }

    public void SetScale(float delay = 0.5f)
    {
        Vector3 scale =transform.localScale + incr;

        transform.DOScale(scale, 1f).SetDelay(delay).SetEase(Ease.OutSine);

        if (delay>0)
        {
            _fx.Play();
        }
    }
}
