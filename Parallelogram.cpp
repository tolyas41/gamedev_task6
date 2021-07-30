#include "Parallelogram.h"
#include <math.h>
#include <vector>

Parallelogram::Parallelogram(float InX1, float InY1, float InX2, float InY2, float InX3, float InY3) {
	point.initial.x = InX1;
	point.initial.y = InY1;
	point.coord1.x = InX2;
	point.coord1.y = InY2;
	point.coord2.x = InX3;
	point.coord2.y = InY3;
	side1 = sqrt(pow(point.coord1.x - point.initial.x, 2) + pow(point.coord1.y - point.initial.y, 2));
	side2 = sqrt(pow(point.coord2.x - point.initial.x, 2) + pow(point.coord2.y - point.initial.y, 2));
	angle = acos(((point.coord2.x - point.initial.x) * (point.coord1.x - point.initial.x) 
		+ (point.coord2.y - point.initial.y) * (point.coord1.y - point.initial.y)) / (side1 * side2));
	CalculateVertices();
	pivot.x = (point.coord1.x + point.coord2.x) / 2;
	pivot.y = (point.coord1.y + point.coord2.y) / 2;
}
Parallelogram::~Parallelogram() {
}

float Parallelogram::GetArea() {
	return (side1 * (sin(angle) * side2));
}

float Parallelogram::GetPerimeter() {
	return (side1 + side2) * 2;
}

Body2D::Point2D Parallelogram::GetCenter() {
	return pivot;
}

std::vector<float> Parallelogram::GetVertices() {
	return vertices;
}

void Parallelogram::CalculateVertices() {
	vertices.push_back(point.initial.x);
	vertices.push_back(point.initial.y);
	vertices.push_back(point.coord1.x);
	vertices.push_back(point.coord1.y);
	vertices.push_back(point.coord2.x);
	vertices.push_back(point.coord2.y);
	vertices.push_back(point.coord2.x + point.coord1.x - point.initial.x);
	vertices.push_back(point.coord2.y + point.coord1.y - point.initial.y);
}
