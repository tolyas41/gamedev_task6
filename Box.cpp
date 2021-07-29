#include "Box.h"

Box::Box(float InX1, float InY1, float InZ1, float InSide1, float InSide2, float InSide3)
	: x1(InX1), y1(InY1), z1(InZ1), side1(InSide1), side2(InSide2), side3(InSide3) {
}
Box::~Box() {
}

float Box::GetSurfaceArea() {
	return 2 * side1 * side2 + 2 * side2 * side3 + 2 * side3 * side1;
}

float Box::GetVolume() {
	return side1 * side2 * side3;
}

Body3D::Center3D Box::GetCenter() {
	Center3D center;
	center.x = x1 + side1 / 2;
	center.y = y1 + side2 / 2;
	center.z = z1 + side3 / 2;
	return center;
}

std::vector<float> Box::CalculateVertices() {
	std::vector<float> vertices;
	vertices.push_back(x1);			  //1
	vertices.push_back(y1);
	vertices.push_back(z1);
	vertices.push_back(x1);			  //2
	vertices.push_back(y1 + side2);
	vertices.push_back(z1);
	vertices.push_back(x1 + side1);	  //3
	vertices.push_back(y1 + side2);
	vertices.push_back(z1);
	vertices.push_back(x1 + side1);	  //4
	vertices.push_back(y1);
	vertices.push_back(z1);
	vertices.push_back(x1 + side1);	  //5
	vertices.push_back(y1);
	vertices.push_back(z1 + side3);
	vertices.push_back(x1 + side1);	  //6
	vertices.push_back(y1 + side2);
	vertices.push_back(z1 + side3);
	vertices.push_back(x1);			  //7
	vertices.push_back(y1 + side2);
	vertices.push_back(z1 + side3);
	vertices.push_back(x1);			  //8
	vertices.push_back(y1);
	vertices.push_back(z1 + side3);
	return vertices;
}
std::vector<float> Box::GetVertices() {
	return vertices;
}
