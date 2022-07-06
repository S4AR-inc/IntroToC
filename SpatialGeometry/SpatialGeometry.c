#include <stdio.h>
#include "point.h"
#include "size.h"

void printArr(Rect* array, int length) {
    for (int i = 0; i < length; i++)
    {
        printf("Rectangle%d:\nWidth = %f\nHeight = %f\n\n", i, array[i].Width, array[i].Height);
    }
}


int main()
{
	Point2D first = { 1, 1 };
	Point2D second = { -3, -3 };
	Point2D farthest = FarthestFromOrigin(first, second);
	printf("farthest: X: %f, Y: %f\n", farthest.X, farthest.Y);

	Rect rect1;
	InitializeRect(&rect1, 5, 5);
	printf("area: %f\n", Area(rect1));
	Rect rect2 = { 7, 4 };
	Rect largest = Largest(rect1, rect2);
	printf("largest: Width: %f, Height: %f\n", largest.Width, largest.Height);
	Rect containter = { 6, 5 };
	printf("can contain rect1: %s\n", CanContain(containter, rect1) ? "true" : "false");
	printf("can contain rect2: %s\n", CanContain(containter, rect2) ? "true" : "false");

	Rect arr[6] = { {1,1}, {2,2}, {3,3}, {4,4}, {5,5}, {7,7} };
	printArr(arr, 6);

}
