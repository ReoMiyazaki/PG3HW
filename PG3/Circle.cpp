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
	printf("â~ÇÃîºåa : %f\n", radius);
	printf("â~ÇÃñ êœ : %f\n", result);
}
