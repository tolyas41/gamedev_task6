#include "Box.h"
#include <vector>

Box::Box(float InX, float InY, float InZ, float InSide1, float InSide2, float InSide3)
	: side1(InSide1), side2(InSide2), side3(InSide3) {
	InitialPoint.x = InX;
	InitialPoint.y = InY;
	InitialPoint.z = InZ;
	CalculateVertices();
	pivot.x = InitialPoint.x + side1 / 2;
	pivot.y = InitialPoint.y + side2 / 2;
	pivot.z = InitialPoint.z + side3 / 2;
}
Box::~Box() {
}

float Box::GetSurfaceArea() {
	return 2 * side1 * side2 + 2 * side2 * side3 + 2 * side3 * side1;
}

float Box::GetVolume() {
	return side1 * side2 * side3;
}

Body3D::Point3D Box::GetCenter() {
	return pivot;
}

std::vector<float> Box::GetVertices() {
	return vertices;
}

void Box::CalculateVertices() {
	vertices.push_back(InitialPoint.x);			  //1
	vertices.push_back(InitialPoint.y);
	vertices.push_back(InitialPoint.z);
	vertices.push_back(InitialPoint.x);			  //2
	vertices.push_back(InitialPoint.y + side2);
	vertices.push_back(InitialPoint.z);
	vertices.push_back(InitialPoint.x + side1);	  //3
	vertices.push_back(InitialPoint.y + side2);
	vertices.push_back(InitialPoint.z);
	vertices.push_back(InitialPoint.x + side1);	  //4
	vertices.push_back(InitialPoint.y);
	vertices.push_back(InitialPoint.z);
	vertices.push_back(InitialPoint.x + side1);	  //5
	vertices.push_back(InitialPoint.y);
	vertices.push_back(InitialPoint.z + side3);
	vertices.push_back(InitialPoint.x + side1);	  //6
	vertices.push_back(InitialPoint.y + side2);
	vertices.push_back(InitialPoint.z + side3);
	vertices.push_back(InitialPoint.x);			  //7
	vertices.push_back(InitialPoint.y + side2);
	vertices.push_back(InitialPoint.z + side3);
	vertices.push_back(InitialPoint.x);			  //8
	vertices.push_back(InitialPoint.y);
	vertices.push_back(InitialPoint.z + side3);
}