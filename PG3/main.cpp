#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "windows.h"

typedef void(*PFunc)();

// コールバック関数
void setTimeout(int anser, int result)
{
	// コールバック関数を呼び出す
	Sleep(3 * 1'000);

	if (anser == result)
	{
		printf("あなたの勝ち\n");
	}
	else
	{
		printf("あなたの負け\n");
	}
}

int main()
{
	srand(time(nullptr));
	int anser = 0;
	int dice = 0;
	int result = 0;

	printf("サイコロの出目は、半か丁か\n");
	printf("半なら1, 丁なら0を入力してください → ");
	scanf_s("%d", &anser);
	dice = rand() % 6 + 1;
	result = dice % 2;

	// 3秒待つ
	setTimeout(anser, result);
	printf("ダイスの出目は%d\n", dice);
	return 0;
}