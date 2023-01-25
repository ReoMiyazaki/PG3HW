#include <stdio.h>
#include "Enemy.h"
#include "windows.h"

int main()
{
	int enemystate = 0;

	Enemy* enemy = new Enemy();
	enemy->Initialize();

	while (true)
	{
		enemy->Update(enemystate);
		Sleep(2 * 1'000);
		if (enemystate < 2)
		{
			enemystate++;
		}
		else
		{
			enemystate = 0;
			system("cls");
		}
	}

	return 0;
}