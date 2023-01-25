#include <stdio.h>
#include "Enemy.h"
#include "windows.h"

int main()
{
	Enemy* enemy1 = new Enemy();
	Enemy* enemy2 = new Enemy();
	Enemy* enemy3 = new Enemy();

	enemy1->Initialize();
	enemy2->Initialize();
	enemy3->Initialize();

	int isKill = false;

	while (true)
	{
		system("cls");

		printf("敵をどうするか決めてください。\n");
		printf("無視 →　0, キル → 1 : 入力 → ");
		scanf_s("%d", &isKill);

		switch (isKill)
		{
		case 0:
			Enemy::isAlive = true;
			break;

		case 1:
			Enemy::isAlive = false;
			break;

		default:
			printf("0 又は 1 を入力してください。\n");
			break;
		}

		enemy1->Update(isKill);
		enemy2->Update(isKill);
		enemy3->Update(isKill);
		Sleep(1 * 1'000);
	}

	delete enemy1;
	delete enemy2;
	delete enemy3;

	return 0;
}