#include <stdio.h>
#include "Enemy.h"

int Enemy::isAlive;

void Enemy::Initialize(){}

void Enemy::Update(int isAlive)
{
	if (isAlive == 0)
	{
		printf("敵は死んだ。\n");
	}
	else if (isAlive == 1)
	{
		printf("敵は生きている。\n");
	}
}

void Enemy::Draw(){}
