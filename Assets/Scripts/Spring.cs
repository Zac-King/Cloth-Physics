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

    public Spring(GameObject _p1, GameObject _p2, float _stiffness)
    {
        P1 = _p1;
        P2 = _p2;
        k = _stiffness;
    }

    public void DrawSpring()
    {
        Debug.DrawLine(P1.transform.position, P2.transform.position);
    }

    public void ComputeSpringForces()
    {

    }
    
    private GameObject P1;
    private GameObject P2;
    private float k = 0;
    private Vector3 Fd = Vector3.zero;
}

