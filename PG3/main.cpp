#include <stdio.h>

// 一般的な賃金体系の計算
int General(int salary, int time)
{
	return salary * time;
}

// 再帰的な賃金体系の計算
int Recursive(int salary, int time)
{
	if (time <= 0)
	{
		return 0;
	}

	return salary + Recursive(salary * 2 - 50, time - 1);
}

int main(void)
{
	// 働いた時間
	int h = 4;

	printf("一般的な賃金体系の場合%d円\n", General(1072, h));
	printf("再帰的な賃金体系の場合%d円\n", Recursive(100, h));

	if (General(1072, h) > Recursive(100, h))
	{
		printf("%d時間働いた場合一般的な賃金体系の方が高い\n", h);
	}
	else
	{
		printf("%d時間働いた場合再帰的な賃金体系の方が高い\n", h);
	}
	return 0;
}