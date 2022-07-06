#include "point.h"

double DistanceSquered(Point2D from, Point2D to)
{
	double xDifference = (to.X - from.X);
	double yDifference = (to.Y - from.Y);
	return xDifference * xDifference + yDifference * yDifference;
}

Point2D FarthestFromOrigin(Point2D first, Point2D second)
{
	Point2D origin = { 0, 0 };
	if (DistanceSquered(origin, first) > DistanceSquered(origin, second)) {
		return first;
	}else{
		return second;
	}
}
