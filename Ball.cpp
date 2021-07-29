#include "Ball.h"

Ball::Ball(float InX1, float InY1, float InZ1, float _radius)
	: x1(InX1), y1(InY1), z1(InZ1), radius(_radius) {
}
Ball::~Ball() {
}

float Ball::GetSurfaceArea() {
	return 4 * M_PI * radius * radius;
}

float Ball::GetVolume() {
	return 4 * M_PI * radius * radius * radius / 3;
}

Body3D::Point3D Ball::GetCenter() {
	Point3D center;
	center.x = x1;
	center.y = y1;
	center.z = z1;
	return center;
}
