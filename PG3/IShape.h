#pragma once
#include <stdio.h>
class IShape
{
public:

	IShape();	// コンストラクタ
	~IShape();	// デストラクタ

	void Initialize();	// 初期化
	void Update();		// 更新
	void Draw();		// 描画

	virtual void size() = 0;	// 面積
	virtual void draw() = 0; // 面積の値の描画
};