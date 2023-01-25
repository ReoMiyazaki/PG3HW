#pragma once

#include <stdio.h>

class SceneManager final
{
private:
	// コンストラクタをprivateにする
	SceneManager();
	// デストラクタをprivateにする
	~SceneManager();
public:
	// コピーコンストラクタを無効にする
	SceneManager(const SceneManager& obj) = delete;
	// 代入演算子を無効にする
	SceneManager& operator=(const SceneManager& obj) = delete;

	static SceneManager* GetInstance();

	void ChangeScene(int sceneNo);
};

