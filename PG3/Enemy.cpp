#include <stdio.h>
#include "Enemy.h"

int Enemy::isAlive = true;

void Enemy::Initialize() {}

void Enemy::Update(int isKill)
{
	if (isKill == 0)
	{
		printf("�G�͐����Ă���B\n");
	}
	else if (isKill == 1)
	{
		printf("�G�͎��񂾁B\n");
	}
}

void Enemy::Draw() {}
