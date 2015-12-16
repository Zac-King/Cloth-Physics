using UnityEngine;
using System.Collections;

[System.Serializable]
public class ClothAeroTriangle
{
    public void ComputeTriangleForces(Vector3 air_Velocity, float density, float drag)
    {
        ClothNode a = nodeA.GetComponent<ClothNode>();
        ClothNode b = nodeB.GetComponent<ClothNode>();
        ClothNode c = nodeC.GetComponent<ClothNode>();

        Vector3 triangleVelocity = (a.velocity + b.velocity + c.velocity) / 3;
        triangleVelocity -= air_Velocity;

        Vector3 p1 = a.transform.position;
        Vector3 p2 = b.transform.position;
        Vector3 p3 = c.transform.position;

        Vector3 r2r1crossr3r1 = Vector3.Cross((p1 - p2), (p3 - p2));
        Vector3 normal = r2r1crossr3r1 / r2r1crossr3r1.magnitude;

        float area = (0.5f * Vector3.Dot(triangleVelocity, normal) * triangleVelocity.magnitude) / r2r1crossr3r1.magnitude;
        //float effectiveArea = area * Vector3.Dot(triangleVelocity, normal) / triangleVelocity.magnitude;

        Vector3 forceAero = -0.5f * drag * density * area * r2r1crossr3r1;
        forceAero /= 3.0f;

        a.force += forceAero ;
        b.force += forceAero ;
        c.force += forceAero ;
    }
    
    [SerializeField]
    public GameObject nodeA;
    [SerializeField]
    public GameObject nodeB;
    [SerializeField]
    public GameObject nodeC;
}
