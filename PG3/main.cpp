#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "windows.h"

typedef void(*PFunc)();

// �R�[���o�b�N�֐�
void Around()
{
	printf("���Ȃ��̏������I");
}
void Missing()
{
	printf("�c�O�����A���̏������B");
}
void setTimeout(PFunc p, int second)
{
	// �R�[���o�b�N�֐����Ăяo��
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

	printf("�T�C�R���̏o�ڂ́A���������I\n");
	printf("���Ȃ�1, ���Ȃ�0����͂��Ă������� �� ");
	scanf_s("%d", &anser);

	if (anser == 1 || anser == 0)
	{
		// ���͂��
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

		// ���͂�����
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
		// 3�b�҂�
		setTimeout(p, 3);
		printf("�o���ڂ�[%d]���������B\n", dice);
	}

	else
	{
		printf("1��0����͂��Ă��������B\n");
	}

	return 0;
}