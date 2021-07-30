#include "Ball.h"
#define _USE_MATH_DEFINES
#include <math.h>

Ball::Ball(float InX, float InY, float InZ, float InRadius)
	: radius(InRadius) {
	pivot.x = InX;
	pivot.y = InY;
	pivot.z = InZ;
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
	return pivot;
}
