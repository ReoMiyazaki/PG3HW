#pragma once
#include <stdio.h>
#include "IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle();
	~Rectangle();
	void size() override;
	void draw() override;

private:
	int bottom = 10;	// ���
	int height = 10;	// ����
	int result = 0;	// �v�Z����
};

