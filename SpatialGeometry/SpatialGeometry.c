#include <stdio.h>
#include "point.h"

int main()
{
	Point2D first = { 1 , 1 };
	Point2D second = { -3, -3 };
	Point2D farthest = FarthestFromOrigin(first, second);
	printf("farthest: X: %f, Y: %f", farthest.X, farthest.Y);
}
