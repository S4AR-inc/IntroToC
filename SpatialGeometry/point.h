#pragma once

struct Point2D
{
	double X;
	double Y;
};
typedef struct Point2D Point2D;
double DistanceSquered(Point2D from, Point2D to);
Point2D FarthestFromOrigin(Point2D first, Point2D second);
