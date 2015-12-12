using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Spring : MonoBehaviour
{
    
    public void MakeSpring(GameObject _p1, GameObject _p2, float _sCon, float _dCon)
    {
        P1 = _p1;
        P2 = _p2;
        springConstant = _sCon;
        damperConstant = _dCon;
        restLength = Vector3.Distance(P1.transform.position, P2.transform.position);
        breakLength = restLength * 10;

        transform.position = P1.transform.position - P2.transform.position;

        LineRenderer l = gameObject.AddComponent<LineRenderer>(); //add the line comp
        l.SetColors(Color.white, Color.black);//do setup
        l.SetWidth(0.02f, 0.02f);//setup
        l.material = new Material(Shader.Find("Particles/Additive"));
        DrawSpring(ref l);//draw it
   
    }

    public void ComputeSpringForces()
    {
        ClothNode p1node = P1.GetComponent<ClothNode>();
        ClothNode p2node = P2.GetComponent<ClothNode>();
        Vector3 displacement    = P2.transform.position - P1.transform.position;
        float   distance        = displacement.magnitude;
        Vector3 direction       = displacement / distance;

        // 1 Dimension velocities b/c a spring exists in 1 Dimension      // Used in Dampen Force formula
        float node1Velocity = Vector3.Dot( displacement.normalized, p1node.velocity );
        float node2Velocity = Vector3.Dot( displacement.normalized, p2node.velocity );

        // Spring Force = -spring factor * (distance - rest length)
        float Fspring = -springConstant * ( distance - restLength );
        // Dampen Force = -Dampen Factor * (difference of velocity)
        float Fdampen = -damperConstant * ( node2Velocity - node1Velocity );

        // 1 Dimension Spring Dampen Force  // Sum of Spring Force and Dampen Force
        float SpringDampenforce = Fspring + Fdampen;

        // Converting it back into a 3 Dimensional force
        Vector3 p2force = SpringDampenforce * direction;
        Vector3 p1force = -p2force;

        // Applying it to nodes
        p1node.force += p1force;
        p2node.force += p2force;
    }

    public float d;
    public void UpdateSpring()
    {
        ComputeSpringForces();
        
        float dist = Vector3.Distance(P1.transform.position, P2.transform.position);
         
        if (dist > breakLength)
        {
            Destroy(gameObject);
        }

        LineRenderer l = GetComponent<LineRenderer>();
        DrawSpring(ref l);

    }

    /// <summary>
    /// juste sets values of a line renderer
    /// </summary>
    /// <param name="l"></param>
    void DrawSpring(ref LineRenderer l)
    {           
        l.SetPosition(0, P1.transform.position);
        l.SetPosition(1, P2.transform.position);
        // DrawSpring();
    }

    public GameObject P1;   // Point 1
    public GameObject P2;   // Point 2

    //issue is with a class global getting overwritten

    [SerializeField]
    public float breakLength;   
    [SerializeField]
    public float restLength;        // Rest Length      // constant
    [SerializeField]
    public float springConstant;    // Spring           // constant
    [SerializeField]
    public float damperConstant;    // Damper           // constant
}