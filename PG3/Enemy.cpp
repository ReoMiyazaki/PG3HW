#include <stdio.h>
#include "Enemy.h"

int Enemy::isAlive = true;

void Enemy::Initialize() {}

void Enemy::Update(int isKill)
{
	if (isKill == 0)
	{
		printf("敵は生きている。\n");
	}
	else if (isKill == 1)
	{
		printf("敵は死んだ。\n");
	}
}

void Enemy::Draw() {}
