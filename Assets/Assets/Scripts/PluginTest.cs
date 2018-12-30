using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PluginTest : MonoBehaviour {

	public const string pluginName = "phonebook.example.com.addcontact.Contact";
	static AndroidJavaClass _pluginClass;
	static AndroidJavaObject _pluginInstance;

	public Text text;

	// Use this for initialization
	void Start () {
		//text.text = printHello ();
		addDummyContact ();
	}
	/*
	public static AndroidJavaClass PluginClass
	{
		get{ 
			if (_pluginClass == null) {
				_pluginClass = new AndroidJavaClass (pluginName);
			}
			return _pluginClass;
		}
	}

	public static AndroidJavaObject PluginInstance
	{
		get{ 
			if (_pluginInstance == null) {
			
				_pluginInstance = new PluginClass.CallStatic<AndroidJavaObject> ("getInstance");
			}
			return _pluginInstance;
		}
	}*/
	
	// Update is called once per frame
	void Update () {
		
	}

	void addDummyContact()
	{
		if (Application.platform == RuntimePlatform.Android) {
			//return PluginInstance.Call<string> ("helloWorld",7);
			var plugin = new AndroidJavaClass (pluginName);
			AndroidJavaClass unityPlayer = new AndroidJavaClass ("com.unity3d.player.UnityPlayer");
			AndroidJavaObject activity = unityPlayer.GetStatic<AndroidJavaObject> ("currentActivity");
			AndroidJavaObject context = activity.Call<AndroidJavaObject> ("getApplicationContext");
			object[] par = new object[3];
			par [0] = "test";
			par [1] = "03322914";
			par [2] = context;
			plugin.CallStatic<string> ("WritePhoneContact",par);
		}
	}

	string printHello()
	{
		if (Application.platform == RuntimePlatform.Android) {
			//return PluginInstance.Call<string> ("helloWorld",7);
			var plugin = new AndroidJavaClass (pluginName);
			return plugin.CallStatic<string> ("helloWorld", 7);
		}
		return "Not Supported";
	}
}
