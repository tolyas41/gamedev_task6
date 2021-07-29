#include "Parallelogram.h"
#include "Ellipse.h"
#include "Box.h"
#include "Ball.h"
#include <iostream>


int main() {
	
	Parallelogram parall(0, 0, 3, 1, 0, 4);
	std::cout << "parallelogram's area : ";
	std::cout << parall.GetArea() << std::endl;
	std::cout << "parallelogram's perimeter : ";
	std::cout << parall.GetPerimeter() << std::endl;
	std::cout << "parallelogram's center : ";
	std::cout << parall.GetCenter().x << " ";
	std::cout << parall.GetCenter().y << std::endl;
	std::cout << "parallelogram's vertices : ";
	for (auto v : parall.GetVertices())
		std::cout << v << " ";
	std::cout << "\n";

	Ellipse elli(0, 0, 2, 1);
	std::cout << "ellipse perimeter : ";
	std::cout << elli.GetPerimeter() << std::endl;
	std::cout << "ellipse area : ";
	std::cout << elli.GetArea() << std::endl;

	Box box(2, 4, 5, 10, 3, 6);
	std::cout << "box's surface : ";
	std::cout << box.GetSurfaceArea() << std::endl;
	std::cout << "box's volume : ";
	std::cout << box.GetVolume() << std::endl;
	std::cout << "box's center : ";
	std::cout << box.GetCenter().x << " ";
	std::cout << box.GetCenter().y << " ";
	std::cout << box.GetCenter().z << std::endl;
	std::cout << "box's vertices : ";
	for (auto v : box.GetVertices())
		std::cout << v << " ";
	std::cout << "\n";

	Ball ball(2, 3, 4, 11);
	std::cout << "ball's surface : ";
	std::cout << ball.GetSurfaceArea() << std::endl;
	std::cout << "ball's volume : ";
	std::cout << ball.GetVolume() << std::endl;
	std::cout << "ball's center : ";
	std::cout << ball.GetCenter().x << " ";
	std::cout << ball.GetCenter().y << " ";
	std::cout << ball.GetCenter().z << std::endl;

	return 0;
}

