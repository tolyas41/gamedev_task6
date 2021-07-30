#pragma once
#include "Body2D.h"

class Ellipse: public Body2D {

	Point2D pivot;
	float radius1;
	float radius2;

public:

	Ellipse(float InX, float InY, float InRadius1, float InRadius2);
	~Ellipse();

	virtual float GetPerimeter();
	virtual float GetArea();
	virtual Point2D GetCenter();

};

