#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <functional>

// �R�[���o�b�N�֐�
void setTimeout(std::function<void()>Judgeunction, int second)
{
	// �R�[���o�b�N�֐����Ăяo��
	Sleep(second * 1000);

	Judgeunction();
}

int main(int argc, const char* argv[])
{
	srand(time(nullptr));
	int anser = 0;
	int dice = 0;
	dice = rand() % 6 + 1;

	printf("�T�C�R���̏o�ڂ́A��������\n");
	printf("���Ȃ�1, ���Ȃ�0����͂��Ă������� �� ");
	scanf_s("%d", &anser);

	std::function<void()> Judgeunction = [&]()
	{
		if (anser == dice % 2)
		{
			printf("���Ȃ��̏���\n");
		}
		else
		{
			printf("���Ȃ��̕���\n");
		}
		printf("�_�C�X�̒l��%d\n", dice);
	};

	// 3�b�҂�
	setTimeout(Judgeunction, 3);

	return 0;
}