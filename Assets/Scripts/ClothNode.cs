using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ClothNode : MonoBehaviour
{
    void OnMouseOver()
    {
        if (Input.GetKeyDown(KeyCode.Mouse0))
        {
            Vector3 mp = new Vector3(); 
            locked = true;
            if (Input.GetMouseButtonDown(0))
            {
                mp.x = Input.mousePosition.x;
                mp.y = Input.mousePosition.y;
                transform.position -= mp * Time.deltaTime * .2f;
                altered = true;
            }
        }
    }

    void OnMouseExit()
    {
        
        if (altered == true)
        {
            if(locked == false)
            {
                locked = true;
            }
            else
            {
                locked = false;
            }
            altered = false;
        }
    }

    // What does it mean to be a cloth node?
    public void UpdateClothNode(float _gravMod)
    {
        if (!locked)
        {
            // force of Gravity            
            force += (gravity * _gravMod) * mass;
            // F = ma   ||  a = f/m
            acceleration = force / mass;

            velocity = acceleration * Time.fixedDeltaTime;
            
            transform.position += velocity;
        }
        force = Vector3.zero;
        //accleration = Vector3.zero;
    }
    // needs revision
    public bool locked  = false;
    private bool altered = false;

    public float mass   = 1;
    private float nodeCollisonRadius;
    public Vector3 acceleration  = Vector3.zero;
    public Vector3 velocity     = Vector3.zero;
    public Vector3 force        = Vector3.zero;
    public Vector3 gravity      = new Vector3(0, -2, 0);
    [SerializeField]
    private Material selectedColor;
    [SerializeField]
    private Material defaultColor;
}
