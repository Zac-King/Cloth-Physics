﻿using UnityEngine;
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
        //Debug.Log("Spawn Nodes");
    }

    //Vector3 ApplyGravity()
    //{
    //    return Vector3.zero;
    //}

    Vector3 ApplySpringDampers()
    {
        return Vector3.zero;
    }

    [SerializeField]
    private int clothWidth = 2;     // Numbers of nodes in the width
    [SerializeField]
    private int clothHeight = 2;    // Numbers of nodes in the height
    [SerializeField]
    private float initSpacing;      // Initial displacement
    [SerializeField]
    GameObject clothNodePrefab;     // 
    [SerializeField]
    private List<GameObject> clothNodes = new List<GameObject>();

}
