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

#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>

/*===============================================================================
		PARENT CLASS
===============================================================================*/

class Shape{
	protected:
		int x,y,z;
		int side, width, height, radius;
		std::string type;
    public:
		virtual int getArea();
		virtual int getVolume();

		void setSide(int);
		void setWidth(int);
		
		void setHeight(int);
		void setRadius(int);
		
		void setPos(int x, int y, int z);
		void getPos();
		std::string getType();
		//void annArea();
		//void annVolum();
};

/*===============================================================================
		2D ^ 3D CLASSES
===============================================================================*/

class TwoDim: public Shape{
   	public:
    	virtual int getArea()=0;
};

class ThreeDim: public Shape{
   public:
		virtual int getArea()=0;
		virtual int getVolume()=0;
};

/*===============================================================================
		2D SHAPES
===============================================================================*/

class Square: public TwoDim{
	public:
		Square();
		int getArea();
};

class Rectangle: public TwoDim{
   	public:
    	Rectangle();
      	int getArea();
};

class Triangle: public TwoDim{
	public:
		Triangle();
		int getArea();
};

class Parallelogram: public TwoDim{
	public:
		Parallelogram();
		int getArea();
};

class Trapezoid: public TwoDim{
	public:
		Trapezoid();
		int getArea();
};

/*===============================================================================
		3D SHAPES
===============================================================================*/

class Cylinder: public ThreeDim{
    public:
    	Cylinder();
    	int getArea();
    	int getVolume();
};

class Sphere: public ThreeDim{
	public:
		Sphere();
		int getArea();
		int getVolume();
};

class Cube: public ThreeDim{
	public:
		Cube();
		int getArea();
		int getVolume();
};

#endif
