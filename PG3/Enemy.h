#pragma once
class Enemy
{
public:
	Enemy() {};		// コンストラクタ
	~Enemy() {};	// デストラクタ

	void Initialize();			// 初期化
	void Update(int stateNum);	// 更新
	void Draw();				// 描画

	// 自作メンバ変数
	void Approach();	// 接近
	void Attack();		// 攻撃
	void Secession();	// 離脱

private:
	// メンバ関数ポインタのテーブル
	static void (Enemy::* stateTable[])();
};
