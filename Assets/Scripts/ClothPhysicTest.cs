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
        Debug.Log("Spawn Nodes");
        
    }

    [ContextMenu("Attach Springs")]
    private void AttachSprings()
    {
        for(int i = 0; i < clothNodes.Count ; i++)
        {
            //check to see is the last node is on the same row as current // if true spring to left node

            if ((i > clothWidth - 1) && (clothNodes[i - clothWidth])) // spring to above node
            {
                GameObject t = new GameObject("Spring");
                t.AddComponent<Spring>();
                t.GetComponent<Spring>().MakeSpring(clothNodes[i], clothNodes[i - clothWidth], 10, -1);

                clothSprings.Add(t);
            }


            if ((i > 0) && (i % clothWidth != 0))  // spring to left node
            {
                GameObject t = new GameObject("Spring");

                t.AddComponent<Spring>();
                t.GetComponent<Spring>().MakeSpring(clothNodes[i], clothNodes[i - 1], 10, -1);

                clothSprings.Add(t);
            }


            if ((i % clothWidth != clothWidth - 1) && i >= clothWidth) // spring to above right node
            {
                GameObject t = new GameObject("Spring");
                t.AddComponent<Spring>();
                t.GetComponent<Spring>().MakeSpring(clothNodes[i], clothNodes[i - clothWidth + 1], 10, -1);

                clothSprings.Add(t);
            }

            if ((i % clothWidth != 0) && i >= clothWidth) // spring to above left node
            {
                GameObject t = new GameObject("Spring");
                t.AddComponent<Spring>();
                t.GetComponent<Spring>().MakeSpring(clothNodes[i], clothNodes[i - clothWidth - 1], 10, -1);

                clothSprings.Add(t);
            }
        }
    }

    void FixedUpdate()
    {

        foreach (GameObject s in clothSprings)  // Updating Springs
        {
            s.GetComponent<Spring>().UpdateSpring();
        }
        foreach (GameObject n in clothNodes) // Updating Nodes
        {
            n.GetComponent<ClothNode>().UpdateClothNode(gravityMod);
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
    
    public List<GameObject> clothNodes;
    public List<GameObject> clothSprings;
}