using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ClothNode : MonoBehaviour
{
    // What does it mean to be a cloth node?
    public void SimulateClothForce()
    {

    }

    public bool locked;
    public Vector3 velocity;
    private Vector3 gravity = new Vector3(0, 9.8f, 0);
}
