#include <stdio.h>
#include <Windows.h>
#include <vector>
#include <list>

int main()
{	// �R����̉w���̃��X�g
	std::list<const char*>list
	{
		"Tokyo",				// ����
		"Kanda",				// �_�c
		"Akihabara",			// �H�t��
		"Okachimachi",			// ��k��
		"Ueno",					// ���
		"Uguisudani",			// ��J
		"Nippori",				// ���闢 (���̌��1971�J�Ƃ̐����闢<Nishi-Nippori>������)
		"Tabata",				// �c�[
		"Komagome",				// �
		"Sugamo",				// ����
		"Otsuka",				// ���
		"Ikebukuro",			// �r��
		"Mejiro",				// �ڔ�
		"Takadanobaba",			// ���c�n��
		"Shin-Okubo",			// �V��v��
		"Shinjuku",				// �V�h
		"Yoyogi",				// ��X��
		"Harajuku",				// ���h
		"Shibuya",				// �a�J
		"Ebisu",				// �b���
		"Meguro",				// �ڍ�
		"Gotanda",				// �ܔ��c
		"Osaki",				// ���
		"Shinagawa",			// �i�� (���̌��2020�J�Ƃ̍��փQ�[�g�E�F�C<Takanawa-Gateway>������)
		"Tamachi",				// �c��
		"Hamamatsucho",			// �l����
		"Shimbashi",			// �V��
		"Yurakucho",			// �L�y��
	};

	printf("1970�N\n");
	for (std::list<const char*>::iterator i = list.begin(); i != list.end(); ++i)
	{
		printf("%s\n", *i);
	}

	printf("\n2019�N\n");
	for (std::list<const char*>::iterator i = list.begin(); i != list.end(); ++i)
	{
		//�c���܂ŗ�����
		if (*i == "Tabata")
		{
			i = list.insert(i, "Nishi-Nippori");	//�����闢��}������
			printf("%s\n", *i);	//�\���܂ł�����
			++i;				//�C�e���[�^�����ɐi�߂�(�c����\��)
		}
		printf("%s\n", *i);
	}

	printf("\n2022�N\n");
	for (std::list<const char*>::iterator i = list.begin(); i != list.end(); ++i)
	{
		//�c���܂ŗ�����
		if (*i == "Tamachi")
		{
			i = list.insert(i, "Takanawa-Gateway");	//���փQ�[�g�E�F�C��}������
			printf("%s\n", *i);	//�\���܂ł�����
			++i;				//�C�e���[�^�����ɐi�߂�(�c����\��)
		}
		printf("%s\n", *i);
	}

	return 0;
}