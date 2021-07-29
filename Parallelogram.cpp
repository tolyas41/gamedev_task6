#include "Parallelogram.h"

Parallelogram::Parallelogram(float InX1, float InY1, float InX2, float InY2, float InX3, float InY3)
	: x1(InX1), y1(InY1), x2(InX2), y2(InY2), x3(InX3), y3(InY3) {
	side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	side2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	angle = acos(((x3 - x1) * (x2 - x1) + (y3 - y1) * (y2 - y1)) / (side1 * side2));
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
	Point2D center;
	center.x = (x2 + x3) / 2;
	center.y = (y2 + y3) / 2;
	return center;
}

std::vector<float> Parallelogram::CalculateVertices() {
	std::vector<float> result_vertices;
	result_vertices.push_back(x1);
	result_vertices.push_back(y1);
	result_vertices.push_back(x2);
	result_vertices.push_back(y2);
	result_vertices.push_back(x3);
	result_vertices.push_back(y3);
	result_vertices.push_back(x3 + x2 - x1);
	result_vertices.push_back(y3 + y2 - y1);
	return result_vertices;
}
std::vector<float> Parallelogram::GetVertices() {
	return vertices;
}
