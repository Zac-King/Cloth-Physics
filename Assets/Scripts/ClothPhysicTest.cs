using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ClothPhysicTest : MonoBehaviour
{
    [ContextMenu("Spawn Nodes")]
    private void SpawnNodes()
    {

        Vector3 placement = Vector3.zero;

        for(int i = 1; i <= (clothWidth * clothHeight); i++)
        {
            GameObject go = Instantiate(clothNodePrefab);

            go.transform.parent = gameObject.transform; // parenting it to the Game Object with this script
            go.transform.position = placement;  // Assigning 
            
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
        Debug.Log("Spawn Nodes");
        
    }

    [ContextMenu("Attach Springs")]
    private void AttachSprings()
    {
        for(int i = 0; i < clothNodes.Count ; i++)
        {
            //check to see is the last node is on the same row as current // if true spring to left node

            if (i > clothWidth - 1) // spring to above node
                if (clothNodes[i - clothWidth])
                {
                    GameObject t = new GameObject("Spring");
                    t.AddComponent<Spring>();
                    t.GetComponent<Spring>().MakeSpring(clothNodes[i], clothNodes[i - clothWidth], 8f);
                    
                    clothSprings.Add(t);
                }

            if (i > 0)  // spring to left node
                if (i % clothWidth != 0)
                {
                    GameObject t = new GameObject("Spring");
                    
                    t.AddComponent<Spring>();
                    t.GetComponent<Spring>().MakeSpring(clothNodes[i], clothNodes[i - 1], 8f);

                    clothSprings.Add(t);
                }
            
        }
    }
 

    void Update()
    {
        foreach(GameObject n in clothNodes)
        {
            n.GetComponent<ClothNode>().SimulateClothForce();
        }

        foreach (GameObject a in clothSprings)
        {
            a.GetComponent<Spring>().ComputeSpringForces();
            a.GetComponent<Spring>().DrawSpring();
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
    //[SerializeField]
    //private float clothMass;
    [SerializeField]
    private float gravityMod = 1;
    
    public List<GameObject> clothNodes;

    public List<GameObject> clothSprings;

}