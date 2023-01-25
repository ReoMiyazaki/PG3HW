#include <stdio.h>
#include "SceneManager.h"
#include "windows.h"

int main()
{
	SceneManager* sceneManager = SceneManager::GetInstance();
	int sceneNo = 0;

	while (true)
	{
		sceneManager->ChangeScene(sceneNo);
		if (sceneNo < 2) { sceneNo++; }
		else { sceneNo = 0; };
		Sleep(1 * 1'000);
	}
	return 0;
}