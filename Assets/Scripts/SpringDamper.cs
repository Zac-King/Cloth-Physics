using UnityEngine;
using System.Collections;

public class SpringDamper : MonoBehaviour
{
    public SpringDamper( ClothNode _p1, ClothNode _p2)
    {
        P1 = _p1;
        P2 = _p2;

        P1.transform.position += P2.transform.position;
    }

    public void computeForce()
    {

    }

    private float springConstant;
    private float dampingFactor;
    private float restLength;    // Distance in which the spring damper will be at rest
    private ClothNode P1, P2;    // The 2 nodes
}
