#include "Rectangle.h"

Rectangle::Rectangle() {}

Rectangle::~Rectangle() {}

void Rectangle::size()
{
	result = bottom * height;
}

void Rectangle::draw()
{
	printf("��`�̒�� : %d, ���� : %d\n", bottom, height);
	printf("��`�̖ʐ� : %d\n", result);
}
