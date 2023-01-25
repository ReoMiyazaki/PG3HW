#include <stdio.h>
#include "Enemy.h"


void Enemy::Initialize() {}

void Enemy::Update(int stateNum_)
{
	static_cast<size_t>(stateNum_);
	{
		// メンバ関数に入っている関数を呼び出す
		(this->*stateTable[stateNum_])();
	}
}

void Enemy::Draw() {}

void Enemy::Approach() { printf("Enemy : 現在の状態は接近\n"); }

void Enemy::Attack() { printf("Enemy : 現在の状態は攻撃\n"); }

void Enemy::Secession() { printf("Enemy : 現在の状態は離脱\n"); }

// staticで宣言したメンバ関数ポインタテーブルの実態
void(Enemy::* Enemy::stateTable[])() =
{
	&Enemy::Approach,	// 要素番号0
	&Enemy::Attack,		// 要素番号1
	&Enemy::Secession	// 要素番号2
};