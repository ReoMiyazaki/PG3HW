#include <stdio.h>
#include "Enemy.h"

int Enemy::isAlive;

void Enemy::Initialize() {}

void Enemy::Update(int isAlive)
{
	if (isAlive == 0)
	{
		printf("“G‚Í€‚ñ‚¾B\n");
	}
	else if (isAlive == 1)
	{
		printf("“G‚Í¶‚«‚Ä‚¢‚éB\n");
	}
}

void Enemy::Draw() {}