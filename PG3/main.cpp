#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "windows.h"

typedef void(*PFunc)(int*);

void Judge(int* anser)
{
	int dice = 0;
	int result = 0;

	dice = rand() % 6 + 1;

	result = dice % 2;

	if (*anser == result)
	{
		printf("あなたの勝ち\n");
	}
	else
	{
		printf("あなたの負け\n");
	}
	printf("ダイスの出目は%d\n", dice);
}

// コールバック関数
void setTimeout(PFunc p, int anser, int second)
{
	// コールバック関数を呼び出す
	Sleep(second * 1000);

	p(&anser);

}

int main()
{
	srand(time(nullptr));
	int anser = 0;

	PFunc p;
	p = Judge;

	printf("サイコロの出目は、半か丁か\n");
	printf("半なら1, 丁なら0を入力してください → ");
	scanf_s("%d", &anser);

	// 3秒待つ
	setTimeout(p, anser, 3);
	return 0;
}