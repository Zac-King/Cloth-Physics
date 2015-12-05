using UnityEngine;
using System.Collections.Generic;

public class TeacherTest : MonoBehaviour {

    List<Spring> springs;
	// Use this for initialization
	void Start () {
        springs = new List<Spring>();
        springs.AddRange(FindObjectsOfType<Spring>());
	}

    public float stiffness;
    public float dampen;
	// Update is called once per frame
	void Update ()
    {
	    foreach(Spring s in springs)
        {
            s.k = stiffness;
            s.b = dampen;
            
        }
	}
}
