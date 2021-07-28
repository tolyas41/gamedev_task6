#include "Ball.h"

Ball::Ball(double _x1, double _y1, double _z1, double _radius)
	: x1(_x1), y1(_y1), z1(_z1), radius(_radius) {
}
Ball::~Ball() {
}

double Ball::surfaceCalc() {
	return 4 * 3.1416 * radius * radius;
}

double Ball::volumeCalc() {
	return 4 * 3.1416 * radius * radius * radius / 3;
}

std::tuple<double, double, double> Ball::getCenter() {
	return std::make_tuple(x1, y1, z1);
}
