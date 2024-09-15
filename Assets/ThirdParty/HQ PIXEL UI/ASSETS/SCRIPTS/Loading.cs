using System.Collections;
using System.Collections.Generic;
using _GAME.Scripts.Other;
using UnityEngine;
using UnityEngine.UI;
public class Loading : MonoBehaviour
{
    public Image loadingFill;

  
    private void Start()
    {
        

        loadingFill.fillAmount = 0f;
        StartCoroutine(loading());


    }
    void Delay()
    {
    }
    IEnumerator loading()
    {
        while (loadingFill.fillAmount < 0.9f) {
            loadingFill.fillAmount += (0.03f/2f);
        yield return null;
        }
       
        StartGame();
        yield return 0;
    }

    void StartGame()
    {
        LevelManager.LoadStartScene();
    }
}
