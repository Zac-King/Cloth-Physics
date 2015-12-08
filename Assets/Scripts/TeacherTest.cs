using UnityEngine;
using System.Collections.Generic;

public class TeacherTest : MonoBehaviour
{
    public float dampenCon;
    public float springCon;
    List<Spring> springs;
	
    // Use this for initialization
	void Start ()
    {
        springs = new List<Spring>();
        springs.AddRange(FindObjectsOfType<Spring>());
	}
    
	// Update is called once per frame
	void Update ()
    {
	    foreach(Spring s in springs)
        {
            s.springConstant = springCon;
            s.damperConstant = dampenCon;
        }
	}
}
