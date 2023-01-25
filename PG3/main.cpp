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

	int isAlive = 1;

	while (true)
	{
		system("cls");

		printf("�G���ǂ����邩���߂Ă��������B\n");
		printf("�L�� �� 0, ���� �� 1 : ����");
		scanf_s("%d", &isAlive);

		switch (isAlive)
		{
		case 0:
			Enemy::isAlive = false;
			break;

		case 1:
			Enemy::isAlive = true;
			break;

		default:
			printf("0 ���� 1 ����͂��Ă��������B\n");
			break;
		}

		enemy1->Update(isAlive);
		enemy2->Update(isAlive);
		enemy3->Update(isAlive);
		Sleep(1 * 1'000);
	}

	delete enemy1;
	delete enemy2;
	delete enemy3;

	return 0;
}