#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <functional>
#include <Windows.h>

int main(int argc, const char* argv[])
{
	srand(time(nullptr));
	int select = 0;

	// ��������I��ł��炤
	/*printf("�T�C�R���̏o�ڂ́A���������I\n");
	printf("���Ȃ�1, ���Ȃ�0����͂��Ă������� �� ");
	scanf("%d", &select);*/

	std::function<int()> dice;

	return 0;
}