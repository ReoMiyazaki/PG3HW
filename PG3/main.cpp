#include <stdio.h>

// ��ʓI�Ȓ����̌n�̌v�Z
int General(int salary, int time)
{
	return salary * time;
}

// �ċA�I�Ȓ����̌n�̌v�Z
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
	// ����������
	int h = 4;

	printf("��ʓI�Ȓ����̌n�̏ꍇ%d�~\n", General(1072, h));
	printf("�ċA�I�Ȓ����̌n�̏ꍇ%d�~\n", Recursive(100, h));

	if (General(1072, h) > Recursive(100, h))
	{
		printf("%d���ԓ������ꍇ��ʓI�Ȓ����̌n�̕�������\n", h);
	}
	else
	{
		printf("%d���ԓ������ꍇ�ċA�I�Ȓ����̌n�̕�������\n", h);
	}
	return 0;
}