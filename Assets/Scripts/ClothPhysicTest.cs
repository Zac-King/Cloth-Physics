using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ClothPhysicTest : MonoBehaviour
{
    private void SpawnNodes()
    {
        GameObject po = GameObject.Find("TheNodes");
        if(po == null)
        {
            po = new GameObject("TheNodes");
            po.transform.parent = gameObject.transform;
        }

        Vector3 placement = Vector3.zero;

        for(int i = 1; i <= (clothWidth * clothHeight); i++)
        {
            GameObject go = Instantiate(clothNodePrefab);

            go.transform.parent = po.transform; // parenting it to the Game Object with this script
            go.transform.position = placement;          // Assigning 
            
            if ((i % clothWidth) == 0 )
            {
                placement.x = 0;
                placement.y -= initSpacing;
            }
            else
            {
                placement.x += initSpacing;
            }
            clothNodes.Add(go);
        }
        //Debug.Log("Spawn Nodes");
    }
    
    private void AttachSprings()
    {
        GameObject po = GameObject.Find("TheSprings");
        if (po == null)
        {
            po = new GameObject("TheSprings");
            po.transform.parent = gameObject.transform;
        }

        for (int i = 0; i < clothNodes.Count ; i++)
        {
            //check to see is the last node is on the same row as current // if true spring to left node

            if ((i > clothWidth - 1) && (clothNodes[i - clothWidth])) // spring to above node
            {
                GameObject t = new GameObject("Spring");
                t.AddComponent<Spring>();
                t.GetComponent<Spring>().MakeSpring(clothNodes[i], clothNodes[i - clothWidth], springCon, dampCon);

                t.transform.parent = po.transform;

                clothSprings.Add(t);
            }


            if ((i > 0) && (i % clothWidth != 0))  // spring to left node
            {
                GameObject t = new GameObject("Spring");

                t.AddComponent<Spring>();
                t.GetComponent<Spring>().MakeSpring(clothNodes[i], clothNodes[i - 1], springCon, dampCon);

                t.transform.parent = po.transform;

                clothSprings.Add(t);
            }


            if ((i % clothWidth != clothWidth - 1) && i >= clothWidth) // spring to above right node
            {
                GameObject t = new GameObject("Spring");
                t.AddComponent<Spring>();
                t.GetComponent<Spring>().MakeSpring(clothNodes[i], clothNodes[i - clothWidth + 1], springCon, dampCon);

                t.transform.parent = po.transform;

                clothSprings.Add(t);
            }

            if ((i % clothWidth != 0) && i >= clothWidth) // spring to above left node
            {
                GameObject t = new GameObject("Spring");
                t.AddComponent<Spring>();
                t.GetComponent<Spring>().MakeSpring(clothNodes[i], clothNodes[i - clothWidth - 1], springCon, dampCon);

                t.transform.parent = po.transform;

                clothSprings.Add(t);
            }
        }
    }

    private void MakeTriangles()
    {
        GameObject po = GameObject.Find("TheTriangles");
        if (po == null)
        {
            po = new GameObject("TheTriangles");
            po.transform.parent = gameObject.transform;
        }

        for (int i = 0; i < clothNodes.Count; i++)
        {
            // Not the Left most collumn    // Not top row
            // Grab upper left triangle 
            if((i % clothWidth != 0) && (i >= clothWidth))
            {
                GameObject at = new GameObject("Triangle");
                at.AddComponent<ClothAeroTriangle>();
                ClothAeroTriangle tt = at.GetComponent<ClothAeroTriangle>();

                tt.nodeA = clothNodes[i];
                tt.nodeB = clothNodes[i -1];
                tt.nodeC = clothNodes[i - clothWidth];

                at.transform.parent = po.transform;

                aeroTriangles.Add(at);
            }

            // Not the Right most collumn   // Not bottom row
            // Grab lower right triangle 
            if ((i % clothWidth != clothWidth - 1) && (i < clothNodes.Count - clothWidth))
            {
                GameObject at = new GameObject("Triangle");
                at.AddComponent<ClothAeroTriangle>();
                ClothAeroTriangle tt = at.GetComponent<ClothAeroTriangle>();

                tt.nodeA = clothNodes[i];
                tt.nodeB = clothNodes[i + 1];
                tt.nodeC = clothNodes[i + clothWidth];

                at.transform.parent = po.transform;

                aeroTriangles.Add(at);
            }
        }
    }

    [ContextMenu("Create Cloth")]
    public void CreateCloth()
    {
        foreach(GameObject n in clothNodes)
        {
            DestroyImmediate(n);
        }
        foreach (GameObject s in  clothSprings)
        {
            DestroyImmediate(s);
        }
        foreach (GameObject t in aeroTriangles)
        {
            DestroyImmediate(t);
        }
        clothNodes      = new List<GameObject>();
        clothSprings    = new List<GameObject>();
        aeroTriangles   = new List<GameObject>();

        SpawnNodes();
        AttachSprings();
        MakeTriangles();
    }
    void FixedUpdate()
    {
        foreach (GameObject s in clothSprings)  // Updating Springs
        {
            if (s == null)
            {
                clothSprings.Remove(s);
                break;
            }
            else
            {
                Spring t = s.GetComponent<Spring>();    // temp 
                t.springConstant = springCon;
                t.damperConstant = dampCon;
                t.UpdateSpring();
            }
        }

        foreach (GameObject n in clothNodes) // Updating Nodes
        {
            n.GetComponent<ClothNode>().UpdateClothNode(gravityMod, windMod);
        }
    }

    public void SetGravityMod(float g)
    {
        gravityMod = g;
    }

    [SerializeField]
    private int clothWidth = 2;     // Numbers of nodes in the width
    [SerializeField]
    private int clothHeight = 2;    // Numbers of nodes in the height
    [SerializeField]
    private float initSpacing;      // Initial displacement
    [SerializeField]
    GameObject clothNodePrefab;     // tester Prefab

    [SerializeField]
    private float gravityMod = 1;
    [SerializeField]
    private float windMod = 1;

    // Spring Variables
    [SerializeField]
    private float springCon = 10;
    [SerializeField]
    private float dampCon = -2;

    public List<GameObject> clothNodes;
    public List<GameObject> clothSprings;
    public List<GameObject> aeroTriangles;

    
}