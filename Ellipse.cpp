#include "Ellipse.h"
#define _USE_MATH_DEFINES
#include <math.h>


Ellipse::Ellipse(float InX, float InY, float InRadius1, float InRadius2) 
	: radius1(InRadius1), radius2(InRadius2) {
	pivot.x = InX;
	pivot.y = InY;
}
Ellipse::~Ellipse() {
}

float Ellipse::GetPerimeter() {
	return 2 * M_PI * sqrt((radius1 * radius1 + radius2 * radius2) / 2);
}

float Ellipse::GetArea() {
	return M_PI * radius1 * radius2;
}

Body2D::Point2D Ellipse::GetCenter() {
	return pivot;
}
