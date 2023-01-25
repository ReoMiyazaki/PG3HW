#include "Rectangle.h"

Rectangle::Rectangle() {}

Rectangle::~Rectangle() {}

void Rectangle::size()
{
	result = bottom * height;
}

void Rectangle::draw()
{
	printf("‹éŒ`‚Ì’ê•Ó : %d, ‚‚³ : %d\n", bottom, height);
	printf("‹éŒ`‚Ì–ÊÏ : %d\n", result);
}
