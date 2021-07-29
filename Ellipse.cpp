#include "Ellipse.h"


Ellipse::Ellipse(float InX1, float InY1, float _radius1, float _radius2)
	: x1(InX1), y1(InY1), radius1(_radius1), radius2(_radius2) {
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
	Point2D center;
	center.x = x1;
	center.y = y1;
	return center;
}
