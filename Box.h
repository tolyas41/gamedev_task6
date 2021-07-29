#pragma once
#include "Body3D.h"
#include <vector>

class Box: public Body3D {

	float x1;
	float y1;
	float z1;
	float side1;		 //x axis side
	float side2;		 //y axis side
	float side3;		 //z axis side

	std::vector<float> CalculateVertices();
	std::vector<float> vertices = CalculateVertices();

public:

	Box(float InX1, float InY1, float InZ1, float _side1, float _side2, float _side3);
	~Box();

	virtual float GetSurfaceArea();
	virtual float GetVolume();
	virtual Center3D GetCenter();
	std::vector<float> GetVertices();

};

