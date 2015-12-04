using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ClothNode : MonoBehaviour
{
    // What does it mean to be a cloth node?
    public void SimulateClothForce(float _dTime, float _gravMod)
    {
        if (!locked)
        {
            accleration += gravity * _gravMod;
            velocity += mass * accleration;
            gameObject.transform.position += velocity * _dTime;
            velocity = Vector3.zero;
            accleration = Vector3.zero;
        }
    }

    public bool locked = false;
    public float mass = .2f;
    public Vector3 accleration = Vector3.zero;
    public Vector3 velocity = Vector3.zero;
    private Vector3 gravity = new Vector3(0, -1.8f, 0);
}
