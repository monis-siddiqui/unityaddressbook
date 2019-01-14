using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TestUIController : MonoBehaviour {

	public PluginTest pluginTest;
	public InputField firstName;
	public InputField lastName;
	public InputField company;
	public InputField number;


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void onSaveBtnPressed()
	{
		saveContact (firstName.text, lastName.text, company.text, number.text);
	}

	private void saveContact(string firstName,string lastName,string company,string number)
	{
		pluginTest.addContact (firstName,lastName,company,number);
	}

	public void refreshUI()
	{
		firstName.text = lastName.text = company.text = number.text = "";
	}
}
