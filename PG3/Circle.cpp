#include "Circle.h"
#include <stdio.h>

Circle::Circle() {}

Circle::~Circle() {}

void Circle::size()
{
	result = radius * radius * pi;
}

void Circle::draw()
{
	printf("�~�̔��a : %f\n", radius);
	printf("�~�̖ʐ� : %f\n", result);
}
