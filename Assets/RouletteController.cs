using UnityEngine;
using System.Collections;

public class RouletteController : MonoBehaviour {

	float rotSpeed = 0;//回転速度
	
	// Update is called once per frame
	void Update () {
	//マウスが押されたら回転速度を設定する
		if (Input.GetMouseButtonDown (0)) {
			this.rotSpeed = 10;
		}
		//回転速度分、ルーレットを回転させる
		transform.Rotate(0,0,this.rotSpeed);

		//ルーレットを徐々に減速させる
		this.rotSpeed*=0.98f;

	}
}
