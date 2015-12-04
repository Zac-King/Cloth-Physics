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
        float m = (P2.transform.position - P1.transform.position).magnitude;
        Vector3 e = ((P2.transform.position - P1.transform.position) / m);

        // Spring force = stiffness * (points distance apart - Rest length) * direction
        Vector3 Fs = k * (m - d) * e;
        Vector3 Fd = b * ((Vector3.Dot( e, p1node.velocity) - Vector3.Dot(e,  p2node.velocity)) * e);
        p1node.accleration += Fs - Fd;
        p2node.accleration -= Fs - Fd;
        
    }

    public GameObject P1;   // Point 1
    public GameObject P2;   // Point 2
    [SerializeField]
    private float k;        // Stiffness    // constant
    [SerializeField]
    private float d;        // Rest Length  // constant
    [SerializeField]
    private float b;        // Damper       // constant
}