#include "Ball.h"

Ball::Ball(float InX1, float InY1, float InZ1, float InRadius)
	: x1(InX1), y1(InY1), z1(InZ1), radius(InRadius) {
}
Ball::~Ball() {
}

float Ball::GetSurfaceArea() {
	return 4 * M_PI * radius * radius;
}

float Ball::GetVolume() {
	return 4 * M_PI * radius * radius * radius / 3;
}

Body3D::Center3D Ball::GetCenter() {
	Center3D center;
	center.x = x1;
	center.y = y1;
	center.z = z1;
	return center;
}
