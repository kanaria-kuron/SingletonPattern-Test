#pragma once

#include <iostream>


class Singleton
{
public:
	// 実体の取得
	static Singleton* GetInstance() 
	{
		static Singleton instance;
		return &instance;
	}

private:
	// コンストラクタ
	Singleton() {};

public:
	// デストラクタ
	~Singleton() {};

	// ポインタの表示
	void Print()
	{
		std::cout << "instance：" << GetInstance() << std::endl;
	}


	// コピー、ムーブコンストラクタの削除
	Singleton(const Singleton&) = delete;
	Singleton(const Singleton&&) = delete;

	// コピー、ムーブ代入の削除
	Singleton& operator = (const Singleton&) = delete;
	Singleton&& operator = (const Singleton&&) = delete;
};