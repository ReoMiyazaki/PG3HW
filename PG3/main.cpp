#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "windows.h"

typedef void(*PFunc)();

// �R�[���o�b�N�֐�
void setTimeout(int anser, int result)
{
	// �R�[���o�b�N�֐����Ăяo��
	Sleep(3 * 1'000);

	if (anser == result)
	{
		printf("���Ȃ��̏���\n");
	}
	else
	{
		printf("���Ȃ��̕���\n");
	}
}

int main()
{
	srand(time(nullptr));
	int anser = 0;
	int dice = 0;
	int result = 0;

	printf("�T�C�R���̏o�ڂ́A��������\n");
	printf("���Ȃ�1, ���Ȃ�0����͂��Ă������� �� ");
	scanf_s("%d", &anser);
	dice = rand() % 6 + 1;
	result = dice % 2;

	// 3�b�҂�
	setTimeout(anser, result);
	printf("�_�C�X�̏o�ڂ�%d\n", dice);
	return 0;
}