#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
	IShape* shapes[2];

	for (int i = 0; i < 2; i++)
	{
		if (i < 1) { shapes[i] = new Circle(); }
		else { shapes[i] = new Rectangle(); }
	}

	// –ÊÏ‚ðŒvŽZA’l‚ð•`‰æ
	for (int i = 0; i < 2; i++)
	{
		shapes[i]->size();
		shapes[i]->draw();
	}

	for (int i = 0; i < 2; i++)
	{
		delete shapes[i];
	}

	return 0;
}