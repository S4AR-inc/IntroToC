#include "size.h"

double Area(Size2D  size)
{
	return size.Width * size.Height;
}

Size2D  Largest(Size2D  first, Size2D  second)
{
	if (Area(first) > Area(second)) {
		return first;
	} else {
		return second;
	}
}

bool CanContain(Size2D  container, Size2D  content)
{
	return container.Width >= content.Width && container.Height >= content.Height;
}
