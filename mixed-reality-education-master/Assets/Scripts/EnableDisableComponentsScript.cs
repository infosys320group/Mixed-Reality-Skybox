using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnableDisableComponentsScript : MonoBehaviour {


    private Light myLight;

	// Use this for initialization
	void Start () {
        myLight = GetComponent<Light>();
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetKeyUp(KeyCode.L))
        {
            myLight.enabled = !myLight.enabled; //set to reverse
            
        }
        
	}
}
