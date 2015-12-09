using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ClothNode : MonoBehaviour
{
    // What does it mean to be a cloth node?
    public void UpdateClothNode(float _gravMod)
    {
        if (!locked)
        {
            // force of Gravity            
            force += (gravity * _gravMod);
            force += new Vector3(.2f, 0, 0); // fake wind
            // F = ma   ||  a = f/m
            acceleration = force / mass;

            velocity = acceleration * Time.fixedDeltaTime;
            
            transform.position += velocity;
        }
        force = Vector3.zero;
        //accleration = Vector3.zero;
    }
    // needs revision
    public bool locked  = false;
    public float mass   = 1;
    public Vector3 acceleration  = Vector3.zero;
    public Vector3 velocity     = Vector3.zero;
    public Vector3 force        = Vector3.zero;
    public Vector3 gravity      = new Vector3(0, -9, 0);
}
