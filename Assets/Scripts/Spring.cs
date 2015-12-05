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

    public void MakeSpring(GameObject _p1, GameObject _p2, float _stiffness, float _damper)
    {
        P1 = _p1;
        P2 = _p2;
        k = _stiffness;
        d = Vec3Distance(P1.transform.position, P2.transform.position);
        b = _damper;
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
        float distance          = displacement.magnitude;
        Vector3 direction       = displacement / distance;

        // Spring force = stiffness * (points distance apart - Rest length) * direction
        float Fspring = -k * (d - distance);

        //1d velocities b/c a spring exists in 1 dimension
        float node1Velocity = Vector3.Dot(displacement.normalized, p1node.velocity);
        float node2Velocity = Vector3.Dot(displacement.normalized, p2node.velocity);

        float Fdampen = -b * (node1Velocity - node2Velocity);

            //Vector3.Dot(displacement.normalized, p1node.velocity - p2node.velocity);
        ///Vector3 Fs = -k * (d - distance ) * e;
       // Vector3 Fd = -b * ((Vector3.Dot( e, p1node.velocity) - Vector3.Dot(e,  p2node.velocity)) * e);
        float SpringDampenforce = Fspring + Fdampen;

        Vector3 p1force = SpringDampenforce * direction;
        Vector3 p2force = -p1force;

        //p1force += p1node.gravity;
        //p2force += p2node.gravity;

        p1node.force += p1force;
        p2node.force += p2force;
        
    }

    public GameObject P1;   // Point 1
    public GameObject P2;   // Point 2
    [SerializeField]
    public float k;        // Stiffness    // constant
    [SerializeField]
    public float d;        // Rest Length  // constant
    [SerializeField]
    public float b;        // Damper       // constant
}