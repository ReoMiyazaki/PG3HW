#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <functional>
#include <Windows.h>

int main(int argc, const char* argv[])
{
	srand(time(nullptr));
	int select = 0;

	// 半か丁を選んでもらう
	/*printf("サイコロの出目は、半か丁か！\n");
	printf("半なら1, 丁なら0を入力してください → ");
	scanf("%d", &select);*/

	std::function<int()> dice;

	return 0;
}