#pragma once
#include "Body3D.h"
#include <vector>

class Box: public Body3D {

	Point3D InitialPoint;
	float side1;		 //x axis side
	float side2;		 //y axis side
	float side3;		 //z axis side
	Point3D pivot;
	void CalculateVertices();
	std::vector<float> vertices;

public:

	Box(float InX, float InY, float InZ, float _side1, float _side2, float _side3);
	~Box();

	virtual float GetSurfaceArea();
	virtual float GetVolume();
	virtual Point3D GetCenter();
	std::vector<float> GetVertices();

};

