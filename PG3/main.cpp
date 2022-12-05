#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "windows.h"

typedef void(*PFunc)();

// コールバック関数
void Around()
{
	printf("あなたの勝ちだ！");
}
void Missing()
{
	printf("残念だが、私の勝ちだ。");
}
void setTimeout(PFunc p, int second)
{
	// コールバック関数を呼び出す
	Sleep(second * 1'000);
	p();
}

int main()
{
	srand(time(nullptr));
	PFunc p;
	p = Around;
	int anser = 0;
	int dice = rand() % 6 + 1;

	printf("サイコロの出目は、半か丁か！\n");
	printf("半なら1, 丁なら0を入力してください → ");
	scanf_s("%d", &anser);

	if (anser == 1 || anser == 0)
	{
		// 入力が奇数
		if (anser == 1)
		{
			if (dice % 2 == 1)
			{
				p = Around;
			}
			else
			{
				p = Missing;
			}
		}

		// 入力が偶数
		else if (anser == 0)
		{
			if (dice % 2 == 0)
			{
				p = Around;
			}
			else
			{
				p = Missing;
			}
		}
		// 3秒待つ
		setTimeout(p, 3);
		printf("出た目は[%d]だったぜ。\n", dice);
	}

	else
	{
		printf("1か0を入力してください。\n");
	}

	return 0;
}