using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ClothNode : MonoBehaviour
{
    // What does it mean to be a cloth node?


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public bool locked;
    public Vector3 velocity;
    public List<SpringDamper> nodeDampers;
}
