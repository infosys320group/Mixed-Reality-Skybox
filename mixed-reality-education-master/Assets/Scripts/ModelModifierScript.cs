using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelModifierScript : MonoBehaviour {


    //setting a default size for models
    public Vector3 modelScale = new Vector3(100.0f, 100.0f, 100.0f); //  set default                       
    public Vector3 relativePosition = new Vector3(0, 0, 0);

    void Start () {
        this.transform.localScale = modelScale;
        this.transform.localPosition = relativePosition;
    }

    public void SetSize(float size)
    {
        this.transform.localScale = new Vector3(size, size, size);
    }

    // Update is called once per frame
    void Update () {
		
	}
}
