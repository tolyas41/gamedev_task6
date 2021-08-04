# gamedev_task6

Task 6. Inheritance


Develop a class system: 

Abstract class Body2D (with virtual functions for calculating the perimeter and area)

Child classes of the Body2D class: parallelogram, ellipse and abstract Body3D class (with virtual functions for calculating volume and surface area)

Child classes of the Body3D class: box and ball

Ensure that in classes outside the class only the necessary (correct) fields or functions are visible.

For all classes create functions:

getCenter(), which will return the x, y coordinates of the center of the figure;

getVerteces(), which will return the vector with the coordinates of the vertices of the figure. For some figures this is possible, for example, for a parallelogram, and for some it is impossible, for example, for an ellipse.

