#include <iostream>

#include "Singleton.h"


int main()
{
	// ���̂̎擾
	Singleton* ins = Singleton::GetInstance();
	Singleton* ins2 = Singleton::GetInstance();

	// �������̂Ȃ̂����m�F
	ins->Print();
	ins2->Print();



	// �R���X�g���N�^�ւ̃A�N�Z�X�֎~
	//Singleton insS;
	//Singleton* insP = new Singleton();

	// �R�s�[�R���X�g���N�^�̋֎~
	//Singleton* insC = Singleton(*ins);

	// ���[�u�R���X�g���N�^�̋֎~
	//Singleton* insM = Singleton(std::move(*ins));


	// �R�s�[����̋֎~
	//Singleton* insCE = nullptr;
	//(*insCE) = (*ins);

	// ���[�u����̋֎~
	//Singleton* insME = nullptr;
	//(*insME) = std::move(*ins);



	return 0;
}