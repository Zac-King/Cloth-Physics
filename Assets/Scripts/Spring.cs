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

    public void MakeSpring(GameObject _p1, GameObject _p2, float _stiffness)
    {
        P1 = _p1;
        P2 = _p2;
        k = _stiffness;
        d = Vec3Distance(P1.transform.position, P2.transform.position);
    }

    public void DrawSpring()
    {
        Debug.DrawLine(P1.transform.position, P2.transform.position);
    }

    public void ComputeSpringForces()
    {
        float m = (P2.transform.position - P1.transform.position).magnitude;
        // Spring force = stiffness * (points distance apart - Rest length) * direction
        Vector3 sf = k * (m - d) * ((P2.transform.position - P1.transform.position) / m);
        P1.GetComponent<ClothNode>().velocity += sf;
        P2.GetComponent<ClothNode>().velocity -= sf;

    }

    public void UpdateSpring()
    {

    }

    public GameObject P1;   // Point 1
    public GameObject P2;   // Point 2
    [SerializeField]
    private float k;        // Stiffness
    [SerializeField]
    private float d;        // Rest Length // constant
}