#include "SceneManager.h"

SceneManager::SceneManager() {};

SceneManager::~SceneManager() {}

SceneManager* SceneManager::GetInstance()
{
	// 関数内staticとして宣言する
	static SceneManager instance;

	return &instance;
}
void SceneManager::ChangeScene(int sceneNo)
{
	printf("SceneNo:%d\n", sceneNo);
}
