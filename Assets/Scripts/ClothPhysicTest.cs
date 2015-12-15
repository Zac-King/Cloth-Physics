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
            go.transform.localPosition = placement;          // Assigning 
            
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
        for (int i = 0; i < clothNodes.Count; i++)
        {
            // Not the Left most collumn    // Not top row
            // Grab upper left triangle 
            if((i % clothWidth != 0) && (i >= clothWidth))
            {
                ClothAeroTriangle tt = new ClothAeroTriangle();

                tt.nodeA = clothNodes[i];
                tt.nodeB = clothNodes[i -1];
                tt.nodeC = clothNodes[i - clothWidth];

                aeroTriangles.Add(tt);
            }

            // Not the Right most collumn   // Not bottom row
            // Grab lower right triangle 
            if ((i % clothWidth != clothWidth - 1) && (i < clothNodes.Count - clothWidth))
            {
                ClothAeroTriangle tt = new ClothAeroTriangle();

                tt.nodeA = clothNodes[i];
                tt.nodeB = clothNodes[i + 1];
                tt.nodeC = clothNodes[i + clothWidth];
                
                aeroTriangles.Add(tt);
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
        clothNodes      = new List<GameObject>();
        clothSprings    = new List<GameObject>();
        aeroTriangles   = new List<ClothAeroTriangle>();

        SpawnNodes();
        AttachSprings();
        MakeTriangles();

        // lock corners
        //clothNodes[0].GetComponent<ClothNode>().locked = true;
        //clothNodes[clothWidth - 1].GetComponent<ClothNode>().locked = true;
        //clothNodes[clothWidth / 2 - 1].GetComponent<ClothNode>().locked = true;
        for (int i = 0; i < clothNodes.Count; i++)
        {
            if ((i < clothWidth) || (i > clothNodes.Count - (clothWidth - 1)))
            {
                clothNodes[i].GetComponent<ClothNode>().locked = true;
            }
            if ((i % clothWidth == 0) || (i % clothWidth == clothWidth - 1))
            {
                clothNodes[i].GetComponent<ClothNode>().locked = true;
            }
        }

    }
  
    // Slider Functions  /////////////////

    public void SetGravityMod(UnityEngine.UI.Slider slider)
    {
        gravityMod = (float)slider.value;
    }

    public void SetDampenCon(UnityEngine.UI.Slider slider)
    {
        dampCon = (float)slider.value;
    }

    public void SetSpringCon(UnityEngine.UI.Slider slider)
    {
        springCon = (float)slider.value;
    }

    public void SetWind_x(UnityEngine.UI.Slider slider)
    {
        wind.x = (float)slider.value;
    }

    public void SetWind_y(UnityEngine.UI.Slider slider)
    {
        wind.y = (float)slider.value;
    }

    public void SetWind_z(UnityEngine.UI.Slider slider)
    {
        wind.z = (float)slider.value;
    }

    public void SetClothWidth(UnityEngine.UI.Slider slider)
    {
        clothWidth = (int)slider.value;
    }

    public void SetClothHeight(UnityEngine.UI.Slider slider)
    {
        clothHeight = (int)slider.value;
    }

    //////////////////////////////////////

    private GameObject collideObj;
    private RaycastHit rayHit;
    private float distance;
    private Vector3 objPos;
    public void UpdateMouse()
    {
        var ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        var hit = Physics.Raycast(ray.origin, ray.direction, out rayHit);

        if (Input.GetKey(KeyCode.Mouse0))
        {
            if (hit)
            {
                collideObj = rayHit.collider.gameObject;
                distance = rayHit.distance;
            }
            objPos = ray.origin + distance * ray.direction;
            collideObj.transform.position = new Vector3(objPos.x, objPos.y, collideObj.transform.position.z);
        }

        if (Input.GetKeyDown(KeyCode.Mouse1))
        {
            collideObj.GetComponent<ClothNode>().ToggleLock();
        }
        if (Input.GetKeyUp(KeyCode.Mouse0))
        {
            collideObj = null;
        }
        //collideObj = new GameObject();
    }


    //////////////////////////////////////
        

    void FixedUpdate()
    {
        UpdateMouse();

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
            n.GetComponent<ClothNode>().UpdateClothNode(gravityMod);
        }

        foreach (ClothAeroTriangle t in aeroTriangles)
        {
            t.ComputeTriangleForces(wind, density, drag);

            if ((Vector3.Distance(t.nodeA.transform.position, t.nodeB.transform.position) > 10) || (Vector3.Distance(t.nodeA.transform.position, t.nodeC.transform.position) > 10) || (Vector3.Distance(t.nodeB.transform.position, t.nodeC.transform.position) > 10))
            {
                aeroTriangles.Remove(t);
            }
        }
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

    public Vector3 wind = new Vector3(0,0,0);

    // Spring Variables
    [SerializeField]
    private float springCon = 10;
    [SerializeField]
    private float dampCon = -2;

    public float density;
    public float drag;


    public List<GameObject> clothNodes;
    public List<GameObject> clothSprings;
    public List<ClothAeroTriangle> aeroTriangles;
}