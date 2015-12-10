using UnityEngine;
using System.Collections;

public class ClothAeroTriangle : MonoBehaviour
{
    public void UpdateTriangleValues()
    {
        ClothNode n1 = nodeA.GetComponent<ClothNode>();
        ClothNode n2 = nodeB.GetComponent<ClothNode>();
        ClothNode n3 = nodeC.GetComponent<ClothNode>();

        averageVelocity = (n1.velocity + n2.velocity + n3.velocity) / 3;

        Vector3 p1 = nodeA.transform.position;
        Vector3 p2 = nodeB.transform.position;
        Vector3 p3 = nodeC.transform.position;

        triangleNormal = Vector3.Cross((p2 - p1).normalized,(p3 - p1).normalized);

        area = ((p1-p2).magnitude * (p1-p3).magnitude) / 2;
    }



    public GameObject nodeA;
    public GameObject nodeB;
    public GameObject nodeC;

    private Vector3 averageVelocity = Vector3.zero;
    private Vector3 triangleNormal = Vector3.zero;
    private float area = 0;

}
