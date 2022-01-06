#pragma once

#include <iostream>


class Singleton
{
public:
	// ���̂̎擾
	static Singleton* GetInstance() 
	{
		static Singleton instance;
		return &instance;
	}

private:
	// �R���X�g���N�^
	Singleton() {};

public:
	// �f�X�g���N�^
	~Singleton() {};

	// �|�C���^�̕\��
	void Print()
	{
		std::cout << "instance�F" << GetInstance() << std::endl;
	}


	// �R�s�[�A���[�u�R���X�g���N�^�̍폜
	Singleton(const Singleton&) = delete;
	Singleton(const Singleton&&) = delete;

	// �R�s�[�A���[�u����̍폜
	Singleton& operator = (const Singleton&) = delete;
	Singleton&& operator = (const Singleton&&) = delete;
};