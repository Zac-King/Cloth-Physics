using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ClothNode : MonoBehaviour
{
    // What does it mean to be a cloth node?
    public void UpdateClothNode(float _gravMod, GameObject a)
    {
        if (gameObject.transform.position.y < nFloor.transform.position.y + .02f)
        {
            _gravMod = 0;
        }
        if (!locked)
        {
            // force of Gravity            
            force += (gravity * _gravMod) * mass;

            // F = ma   ||  a = f/m
            acceleration = force / mass;

            velocity = acceleration * Time.fixedDeltaTime;
            
            transform.position += velocity;
        }
        force = Vector3.zero;
    }
    
    public bool TouchingFloor()
    {
        if (gameObject.transform.position.y < nFloor.transform.position.y + .02f)
        {
            return true;
        }
        return false;
    }

    public void ToggleLock()
    {
        if(locked)
        {
            locked = false;
        }

        else
        {
            locked = true;
        }
    }
    // needs revision
    public bool locked  = false;
    public float mass   = 1;
    public Vector3 acceleration  = Vector3.zero;
    public Vector3 velocity     = Vector3.zero;
    public Vector3 force        = Vector3.zero;
    public Vector3 gravity      = new Vector3(0, -2, 0);

    public GameObject nFloor;
}
