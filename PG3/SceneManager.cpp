#include "SceneManager.h"

SceneManager::SceneManager() {};

SceneManager::~SceneManager() {}

SceneManager* SceneManager::GetInstance()
{
	// �֐���static�Ƃ��Đ錾����
	static SceneManager instance;

	return &instance;
}
void SceneManager::ChangeScene(int sceneNo)
{
	printf("SceneNo:%d\n", sceneNo);
}
