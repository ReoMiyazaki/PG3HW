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
		printf("���Ȃ��̏���\n");
	}
	else
	{
		printf("���Ȃ��̕���\n");
	}
	printf("�_�C�X�̏o�ڂ�%d\n", dice);
}

// �R�[���o�b�N�֐�
void setTimeout(PFunc p, int anser, int second)
{
	// �R�[���o�b�N�֐����Ăяo��
	Sleep(second * 1000);

	p(&anser);

}

int main()
{
	srand(time(nullptr));
	int anser = 0;

	PFunc p;
	p = Judge;

	printf("�T�C�R���̏o�ڂ́A��������\n");
	printf("���Ȃ�1, ���Ȃ�0����͂��Ă������� �� ");
	scanf_s("%d", &anser);

	// 3�b�҂�
	setTimeout(p, anser, 3);
	return 0;
}