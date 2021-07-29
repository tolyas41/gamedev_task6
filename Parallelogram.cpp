#include "Parallelogram.h"

Parallelogram::Parallelogram(float InX1, float InY1, float InX2, float InY2, float InX3, float InY3) {
	point.x1 = InX1;
	point.y1 = InY1;
	point.x2 = InX2;
	point.y2 = InY2;
	point.x3 = InX3;
	point.y3 = InY3;
	side1 = sqrt(pow(point.x2 - point.x1, 2) + pow(point.y2 - point.y1, 2));
	side2 = sqrt(pow(point.x3 - point.x1, 2) + pow(point.y3 - point.y1, 2));
	angle = acos(((point.x3 - point.x1) * (point.x2 - point.x1) + (point.y3 - point.y1) * (point.y2 - point.y1)) / (side1 * side2));
}
Parallelogram::~Parallelogram() {
}

float Parallelogram::GetArea() {
	return (side1 * (sin(angle) * side2));
}

float Parallelogram::GetPerimeter() {
	return (side1 + side2) * 2;
}

Body2D::Center2D Parallelogram::GetCenter() {
	Center2D center;
	center.x = (point.x2 + point.x3) / 2;
	center.y = (point.y2 + point.y3) / 2;
	return center;
}

std::vector<float> Parallelogram::CalculateVertices() {
	std::vector<float> result_vertices;
	result_vertices.push_back(point.x1);
	result_vertices.push_back(point.y1);
	result_vertices.push_back(point.x2);
	result_vertices.push_back(point.y2);
	result_vertices.push_back(point.x3);
	result_vertices.push_back(point.y3);
	result_vertices.push_back(point.x3 + point.x2 - point.x1);
	result_vertices.push_back(point.y3 + point.y2 - point.y1);
	return result_vertices;
}
std::vector<float> Parallelogram::GetVertices() {
	return vertices;
}
