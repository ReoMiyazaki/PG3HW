#pragma once
class Enemy
{
public:
	Enemy() {};		// �R���X�g���N�^
	~Enemy() {};	// �f�X�g���N�^

	void Initialize();			// ������
	void Update(int stateNum);	// �X�V
	void Draw();				// �`��

	// ���상���o�ϐ�
	void Approach();	// �ڋ�
	void Attack();		// �U��
	void Secession();	// ���E

private:
	// �����o�֐��|�C���^�̃e�[�u��
	static void (Enemy::* stateTable[])();
};
