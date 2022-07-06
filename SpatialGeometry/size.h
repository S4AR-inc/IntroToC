#pragma once

#include <stdbool.h>

struct Size2D {
	double Width;
	double Height;
};
typedef struct Size2D Size2D;
typedef struct Size2D Rect;

double Area(Size2D size);
Size2D Largest(Size2D  first, Size2D  second);
bool CanContain(Size2D  container, Size2D  content);

