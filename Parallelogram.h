#pragma once
#include "Body2D.h"
#include <vector>

class Parallelogram: public Body2D {

	struct InitialPoint {
		Point2D initial;		//intersection side1-side2
		Point2D coord1;			//side1 endpoint
		Point2D coord2;			//side2 endpoint
	};
	InitialPoint point;
	float side1;
	float side2;
	float angle;
	Point2D pivot;
	void CalculateVertices();
	std::vector<float> vertices;

public:

	Parallelogram(float InX1, float InY1, float InX2, float InY2, float InX3, float InY3);
	~Parallelogram();

	virtual float GetArea();
	virtual float GetPerimeter();
	virtual Point2D GetCenter();
	std::vector<float> GetVertices();
};

