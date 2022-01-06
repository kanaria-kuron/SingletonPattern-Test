#include <iostream>

#include "Singleton.h"


int main()
{
	// 実体の取得
	Singleton* ins = Singleton::GetInstance();
	Singleton* ins2 = Singleton::GetInstance();

	// 同じ実体なのかを確認
	ins->Print();
	ins2->Print();



	// コンストラクタへのアクセス禁止
	//Singleton insS;
	//Singleton* insP = new Singleton();

	// コピーコンストラクタの禁止
	//Singleton* insC = Singleton(*ins);

	// ムーブコンストラクタの禁止
	//Singleton* insM = Singleton(std::move(*ins));


	// コピー代入の禁止
	//Singleton* insCE = nullptr;
	//(*insCE) = (*ins);

	// ムーブ代入の禁止
	//Singleton* insME = nullptr;
	//(*insME) = std::move(*ins);



	return 0;
}