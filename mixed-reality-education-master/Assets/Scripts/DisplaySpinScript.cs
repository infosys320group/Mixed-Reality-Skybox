using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisplaySpinScript : MonoBehaviour {


    public Vector3 spinSpeed = new Vector3(0, 0, 0); //make this overridable in inspector even though I can set deafult below in start
    //public Vector3 spinAxis = new Vector3(0, 1, 0); // Vector3.up, we have y as our axis
    
    public float rotateSpeed = 0.5f;

    public GameObject myModel;

    // Use this for initialization
    void Start () {
        // just temporary, will set to maybe 3 different selectable speeds later
        spinSpeed = new Vector3(0, 0.3f, 0);
        //spinAxis = Vector3.up; // just making sure this is here

        //spinAxis.x = (Random.value - Random.value) * .1f;
       // float x = 0;
        //float y = 0;
        //float z = -0.5f;
        var newObject = (GameObject)Instantiate(myModel, this.transform , false);
        //var newObject = (GameObject)Instantiate(myModel, new Vector3(x, y, z), Quaternion.identity,this.transform);
        //newObject.transform.Find("New Text").GetComponent<TextMesh>().text = Boat.BoatName;//"Hullo Again";

        //newObject.transform.localPosition = new Vector3(x, y, z);
        newObject.transform.localScale = new Vector3(100.0f, 100.0f, 100.0f);

    }

    
	
	// Update is called once per frame
	void Update () {
        this.transform.Rotate(spinSpeed);
        //this.transform.RotateAround(this.transform.position, spinAxis, rotateSpeed);
    }
}
