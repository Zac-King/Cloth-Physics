using UnityEngine;
using System.Collections;

public class Spring : MonoBehaviour
{
    public float Vec3Distance(Vector3 a, Vector3 b)
    {
        float dx = b.x - a.x;
        float dy = b.y - a.y;
        float dz = b.z - a.z;

        return Mathf.Sqrt(dx * dx + dy * dy + dz + dz);
    }

    public void MakeSpring(GameObject _p1, GameObject _p2, float _sCon, float _dCon)
    {
        P1 = _p1;
        P2 = _p2;
        springConstant = _sCon;
        restLength = Vec3Distance(P1.transform.position, P2.transform.position);
        damperConstant = _dCon;
    }

    public void DrawSpring()
    {
        Debug.DrawLine(P1.transform.position, P2.transform.position);
    }

    public void ComputeSpringForces()
    {
        ClothNode p1node = P1.GetComponent<ClothNode>();
        ClothNode p2node = P2.GetComponent<ClothNode>();
        Vector3 displacement    = P2.transform.position - P1.transform.position;
        float   distance        = displacement.magnitude;
        Vector3 direction       = displacement / distance;

        // 1 Dimension velocities b/c a spring exists in 1 Dimension      // Used in Dampen Force formula
        float node1Velocity = Vector3.Dot(displacement.normalized, p1node.velocity);
        float node2Velocity = Vector3.Dot(displacement.normalized, p2node.velocity);

        // Spring Force =  - spring Constant * (rest length - distance)
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

    public void UpdateSpring()
    {
        ComputeSpringForces();
        DrawSpring();
    }

    public GameObject P1;   // Point 1
    public GameObject P2;   // Point 2
    [SerializeField]
    public float springConstant;    // Spring Constant  // constant
    [SerializeField]
    public float restLength;        // Rest Length      // constant
    [SerializeField]
    public float damperConstant;    // Damper           // constant
}