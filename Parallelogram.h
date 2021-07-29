#pragma once
#include "Body2D.h"
#include <vector>

class Parallelogram: public Body2D {

	float x1;			//intersection side1-side2
	float y1;
	float x2;			//side1 endpoint
	float y2;
	float x3;			//side2 endpoint
	float y3;
	std::vector<float> coordinates;
	std::vector<float> vertices = CalculateVertices();
	float side1;
	float side2;
	float angle;

	std::vector<float> CalculateVertices();

public:

	Parallelogram(float InX1, float InY1, float InX2, float InY2, float InX3, float InY3);
	~Parallelogram();

	virtual float GetArea();
	virtual float GetPerimeter();
	virtual Point2D GetCenter();
	std::vector<float> GetVertices();
};

