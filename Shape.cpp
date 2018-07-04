/*=============================================================================== 
On my honor,
The following program is a result of personal e#ffort. I have not discussed with
anyone other than my instructor or any appropriate person in charge of the class.
I have not used, or slightly modified  code or portion of code from another
student, or an unauthorized source.
If any C++ language code or documentation used in my program was obtained from
another source, such as a textbook or course notes, that has been clearly noted
with a proper citation in the comments of my program.
I have not designed this program in such a way as to defeat or interfere with the
normal operation of the eniac system or cslab machines at Hunter College .
< Eugene Ko >
< Johnny Qiu >
< Alina Birica >
===============================================================================*/

#include <iostream>
#include "Shape.h"
using namespace std;

int Shape::getArea(){
	return 0;
}

int Shape::getVolume(){
	return 0;
}

/*===============================================================================
		Set functions for side, width, height, radius and coordinates
===============================================================================*/

void Shape::setSide(int s){
	side = s;
	return;
}

void Shape::setWidth(int w){
	width = w;
	return;
}

void Shape::setHeight(int h){
	height = h;
	return;
}

void Shape::setRadius(int r){
	radius = r;
	return;
}

void Shape::setPos(int a, int b, int c){
	x = a;
	y = b;
	z = c;
	return;
}

void Shape::getPos(){
	cout << "Position for " 
		 << type << "(x,y,z): "
		 << "("<<x<<", "<<y<<", "<<z<<")"
		 << endl;
	return;
}

string Shape::getType(){
	return type;
}

int TwoDim::getArea(){
	return 0;
}

/*===============================================================================
		SQUARE <2D>
===============================================================================*/

Square::Square(){
	type = "Square";
}

int Square::getArea(){
	return width * width;
}

/*===============================================================================
		RECTANGLE <2D>
===============================================================================*/

Rectangle::Rectangle(){
	type = "Rectangle";
}

int Rectangle::getArea(){
   return side*side;
}

/*===============================================================================
		TRIANGLE <2D>
===============================================================================*/

Triangle::Triangle(){
	type = "Triangle";
}

int Triangle::getArea(){
	return width * height / 2;
}

/*===============================================================================
		PARALLELOGRAM <2D>
===============================================================================*/

Parallelogram::Parallelogram(){
	type = "Parallelogram";
}

int Parallelogram::getArea(){
	return (side * height);
}

/*===============================================================================
		TRAPEZOID <2D>
===============================================================================*/

Trapezoid::Trapezoid(){
	type = "Trapezoid";
}

int Trapezoid::getArea(){
	return (side + width) /2 * height;
}

/*===============================================================================
		CYLINDER <3D>
===============================================================================*/

Cylinder::Cylinder(){
	type = "Cylinder";
}

int Cylinder::getVolume(){
   return 2 * 3.14 * radius * height;
}

int Cylinder::getArea(){
	return 2 * 3.14 * radius * height + 2 * 3.14 * radius * radius;
}

/*===============================================================================
		SPHERE <3D>
===============================================================================*/

Sphere::Sphere(){
	type = "Sphere";
}

int Sphere::getArea(){
	return 4 * 3.14 * radius * radius;
}

int Sphere::getVolume(){
	return (4/3) * radius * (3.14) * (3.14) * (3.14);
}

/*===============================================================================
		CUBE <3D>
===============================================================================*/

Cube::Cube(){
	type = "Cube";
}

int Cube::getArea(){
	return 6 * side * side;
}

int Cube::getVolume(){
	return side * side * side;
}