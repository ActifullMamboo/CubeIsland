using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Followtarget : MonoBehaviour
{
    [SerializeField] private Transform _target;
    [SerializeField] private Vector3 _offset;
    [SerializeField] private float  _speed;

    private void Update()
    {
        Vector3 pos = _target.position + _offset;
        transform.position = Vector3.Lerp(transform.position, pos, Time.deltaTime * _speed);
    }
}
