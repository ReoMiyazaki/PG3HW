#include <stdio.h>
#include "Enemy.h"

int Enemy::isAlive;

void Enemy::Initialize() {}

void Enemy::Update(int isAlive)
{
	if (isAlive == 0)
	{
		printf("�G�͎��񂾁B\n");
	}
	else if (isAlive == 1)
	{
		printf("�G�͐����Ă���B\n");
	}
}

void Enemy::Draw() {}