#pragma once
#include <stdio.h>
class IShape
{
public:

	IShape();	// �R���X�g���N�^
	~IShape();	// �f�X�g���N�^

	void Initialize();	// ������
	void Update();		// �X�V
	void Draw();		// �`��

	virtual void size() = 0;	// �ʐ�
	virtual void draw() = 0; // �ʐς̒l�̕`��
};