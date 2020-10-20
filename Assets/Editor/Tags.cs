using System;
using System.Text;
using UnityEngine;
using UnityEditor;

public class TagsCreatorWindow : EditorWindow
{

    public static void CreateTag(string tag)
    {
        var asset = AssetDatabase.LoadMainAssetAtPath("ProjectSettings/TagManager.asset");
        if (asset != null)
        { // sanity checking
            var so = new SerializedObject(asset);
            var tags = so.FindProperty("tags");

            var numTags = tags.arraySize;
            // do not create duplicates
            for (int i = 0; i < numTags; i++)
            {
                var existingTag = tags.GetArrayElementAtIndex(i);
                if (existingTag.stringValue == tag) return;
            }

            tags.InsertArrayElementAtIndex(numTags);
            tags.GetArrayElementAtIndex(numTags).stringValue = tag;
            so.ApplyModifiedProperties();
            so.Update();
        }
    }

    [MenuItem("Window/Tags Creator")]
    public static void ShowWindow()
    {
        EditorWindow.GetWindow(typeof(TagsCreatorWindow));
    }

    string RandomString()
    {
        StringBuilder sb = new StringBuilder();
        const string glyphs = "ABCHDJWYUEQOPO0457894";
        int len = UnityEngine.Random.Range(7, 10);
        while (len-- > 0)
        {
            sb.Append(glyphs[UnityEngine.Random.Range(0, glyphs.Length)]);
        }
        return sb.ToString();
    }

    void OnGUI()
    {
        if (GUILayout.Button("Create Random Tag"))
        {
            CreateTag(RandomString());
        }
    }
}