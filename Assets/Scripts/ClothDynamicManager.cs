using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ClothDynamicManager : MonoBehaviour
{
    [SerializeField]
    GameObject clothNodePrefab;     // tester Prefab

    [SerializeField]
    private int clothWidth = 2;     // Numbers of nodes in the width
    [SerializeField]
    private int clothHeight = 2;    // Numbers of nodes in the height

    [SerializeField]
    private float initSpacing;      // Initial displacement
    [SerializeField]
    private float clothStiffness;

    //[SerializeField]
    //private float clothMass;
    [SerializeField]
    private float gravityMod = 1;
    [SerializeField]
    private List<GameObject> clothNodes;
    [SerializeField]
    public List<GameObject> clothSprings;
}
