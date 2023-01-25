#pragma once
class Enemy
{
public:
	static int isAlive;
	Enemy() {};
	~Enemy() {};

	void Initialize();
	void Update(int isKill);
	void Draw();
};

