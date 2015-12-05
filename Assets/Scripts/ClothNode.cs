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
            // force of Gravity            
            force = gravity * mass;

            // F = ma   ||  a = f/m
            accleration = force / mass;

            velocity += accleration * Time.fixedDeltaTime;
            
            gameObject.transform.position += velocity * Time.fixedDeltaTime;
        } 
    }

    public bool locked = false;
    public float mass = 1;
    public Vector3 accleration = Vector3.zero;
    public Vector3 velocity = Vector3.zero;
    public Vector3 force = Vector3.zero;
    public Vector3 gravity = new Vector3(0, 0, 0);
}
