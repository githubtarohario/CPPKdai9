//******************************************************************************
//
//
//		CPPKad09C1「ポリモーフィズム」
//		CPPKad09C2「仮想デストラクタ」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Fairy.h"

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	//Light* pLight;
	//Darkness* pDarkness;
	//Fire* pFire;

	/*多態性（ポリモフィズム）*/
	Fairy* p=nullptr;//初期化しておく
	cout << "妖精を召喚して自己紹介させます！" << endl;
	while (1) {
		cout << "誰を召喚しますか？（0：光の妖精、1：闇の妖精、2：炎の妖精、3:木の妖精-1：やめる）";
		int		fairy;
		cin >> fairy;
		if (fairy < 0) break;//-1が入力で終了
		cout << endl;
		//switch (fairy) {
		//default:
		//case 0:		// 光の妖精
		//	pLight = new Light;
		//	pLight->intro();
		//	delete pLight;
		//	break;
		//case 1:		// 闇の妖精
		//	pDarkness = new Darkness;
		//	pDarkness->intro();
		//	delete pDarkness;
		//	break;
		//case 2:		// 炎の妖精
		//	pFire = new Fire;
		//	pFire->intro();
		//	delete pFire;
		//	break;
		//}
		/*変更する*/
		switch (fairy) {
		case 0://光
			p = new Light;
			break;//闇
		case 1:
			p = new Darkness;
			break;
		case 2://炎
			p = new Fire;
			break;
		case 3://木
			p = new Tree;
		}
		p->intro();
		cout << endl;
	}
	//オブジェクト削除
	delete p;//デストラクターを呼ぶ

	return 0;
}

//******************************************************************************
