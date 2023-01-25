#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <functional>

// コールバック関数
void setTimeout(std::function<void()>Judgeunction, int second)
{
	// コールバック関数を呼び出す
	Sleep(second * 1000);

	Judgeunction();
}

int main(int argc, const char* argv[])
{
	srand(time(nullptr));
	int anser = 0;
	int dice = 0;
	dice = rand() % 6 + 1;

	printf("サイコロの出目は、半か丁か\n");
	printf("半なら1, 丁なら0を入力してください → ");
	scanf_s("%d", &anser);

	std::function<void()> Judgeunction = [&]()
	{
		if (anser == dice % 2)
		{
			printf("あなたの勝ち\n");
		}
		else
		{
			printf("あなたの負け\n");
		}
		printf("ダイスの値は%d\n", dice);
	};

	// 3秒待つ
	setTimeout(Judgeunction, 3);

	return 0;
}