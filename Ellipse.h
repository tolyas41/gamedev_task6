#pragma once
#include "Body2D.h"

class Ellipse: public Body2D {

	float x1;		   //center of the ellipse
	float y1;		   
	float radius1;
	float radius2;

public:

	Ellipse(float InX1, float InY1, float _radius1, float _radius2);
	~Ellipse();

	virtual float GetPerimeter();
	virtual float GetArea();
	virtual Point2D GetCenter();

};

