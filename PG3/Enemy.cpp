#include <stdio.h>
#include "Enemy.h"


void Enemy::Initialize() {}

void Enemy::Update(int stateNum_)
{
	static_cast<size_t>(stateNum_);
	{
		// �����o�֐��ɓ����Ă���֐����Ăяo��
		(this->*stateTable[stateNum_])();
	}
}

void Enemy::Draw() {}

void Enemy::Approach() { printf("Enemy : ���݂̏�Ԃ͐ڋ�\n"); }

void Enemy::Attack() { printf("Enemy : ���݂̏�Ԃ͍U��\n"); }

void Enemy::Secession() { printf("Enemy : ���݂̏�Ԃ͗��E\n"); }

// static�Ő錾���������o�֐��|�C���^�e�[�u���̎���
void(Enemy::* Enemy::stateTable[])() =
{
	&Enemy::Approach,	// �v�f�ԍ�0
	&Enemy::Attack,		// �v�f�ԍ�1
	&Enemy::Secession	// �v�f�ԍ�2
};