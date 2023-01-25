#pragma once
#include <stdio.h>
#include "IShape.h"

class Circle : public IShape
{
public:
	Circle();
	~Circle();
	void size() override;
	void draw() override;

private:
	float radius = 5.0f;
	float pi = 3.1415f;
	float result = 0;
};