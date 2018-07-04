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
/*
Author: <Eugene A. Ko, Alina Birica, Johnny Qiu>
Course: {235}
Instructor: <Severin Ngnosse>
Assignment: <Project 1>
Due Date: March 27, 2016

    This program allows user to make 2D or 3D objects and list them on the vectors.
Every objects requires x, y, and z coordinates as well as width, height, side and/or
radius for its applicable shapes.  
*/

#include <iostream>
#include <vector>
#include "Shape.h"
using namespace std;

void setTwoD(Shape* x, vector<Shape*>& vec);
void setTreeD(Shape* x, vector<Shape*>& vec);
void two(vector<Shape*>& vec);
void tree(vector<Shape*>& vec);

int main(){
	
	int posX, posY, posZ;
	int userInput;
	int width, height, side, radius;
	
	vector<Shape*> twodim(0);
	vector<Shape*> treedim(0);
	
	Shape* target;

/*===============================================================================
		USER MENU interface and implementation
===============================================================================*/

	do{
	
		cout << " Welcome to the interface menu. " << endl;
		
		cout << " 1.Square(width) " << endl;
		cout << " 2.Rectangle(side)" << endl;
		cout << " 3.Triangle(width, height) " << endl;
		cout << " 4.Parallelogram(side, height)" << endl;
		cout << " 5.Trapezoid(width, side, height) " << endl;
		
		cout << " 6.Cylinder(radius, height) " << endl;
		cout << " 7.Sphere(radius) " << endl;
		cout << " 8.Cube(side) " << endl;
		
		cout << " 9.2D list" <<endl;
		cout << " 10.3D list" <<endl;
		
		cout << " 11.Exit" <<endl;
		
		cout<<"Please select from 1-11: ";
		cin >> userInput;
		
		if(userInput<1 || userInput>11){
			cout << " Please enter a number within the range " << endl;
			cin>>userInput;
			
		} else if (userInput==11){
			cout << "Terminating program..." <<endl;
			return 0;
			
		} else if(userInput==1){	//Square
			
			Square* sq = new Square;
			setTwoD(sq, twodim);
			
		} else if(userInput==2){	//Rectangle
			
			Rectangle* rec = new Rectangle;
			setTwoD(rec, twodim);
			
		} else if(userInput==3){	//Triangle
			
			Triangle* tri = new Triangle;
			setTwoD(tri, twodim);
			
		} else if(userInput==4){	//Parallelogram
			Parallelogram* para = new Parallelogram;
			setTwoD(para, twodim);

		} else if(userInput==5){	//Trapezoid
			Trapezoid* trap = new Trapezoid;
			setTwoD(trap, twodim);

		} else if(userInput==6){	//Cylinder
			Cylinder* cy = new Cylinder;
			setTreeD(cy, treedim);
            			
		} else if(userInput==7){	//Sphere
			Sphere* sphere = new Sphere;
			setTreeD(sphere, treedim);
			
		} else if(userInput==8){	//Cube
			Cube* cube = new Cube;
			setTreeD(cube, treedim);
			
		} else if(userInput==9){	//2DList
			two(twodim);
			
		} else if(userInput==10){	//3DList
			tree(treedim);
			
		}
		
	} while (userInput!=11);
	
	return 0;
}

//Function to ask user for coordinates and 
//values for width, height, side and radius and set them for 2D Shapes

void setTwoD(Shape* target, vector<Shape*>& vec){
	
	int posX, posY, posZ;
	int width, height, side;
	
	cout << "Set coordination" <<endl;
	cout << "x: ";
	cin >> posX;
	cout << "y: ";
	cin >> posY;
	cout << "z: ";
	cin >> posZ;
	
	target->setPos(posX, posY, posZ);
	
	cout << "Pleaser enter width, height, and/or side."<<endl;
	
    cout << " 1.Square(width) " << endl;
    cout << " 2.Rectangle(side)" << endl;
    cout << " 3.Triangle(width, height) " << endl;
    cout << " 4.Parallelogram(side, height)" << endl;
    cout << " 5.Trapezoid(width, side, height) " << endl;
    
    cout << " 6.Cylinder(radius, height) " << endl;
    cout << " 7.Sphere(radius) " << endl;
    cout << " 8.Cube(side) " << endl;
    
    
    
	cout << "Width: ";
	cin >> width;
	cout << "Height: ";
	cin >> height;
	cout << "Side: ";
	cin >> side;
	
				
	target->setWidth(width);
	target->setHeight(height);
	target->setHeight(height);
	
    cout<<"The area for \""<<target->getType()<<"\" is "<<target->getArea()<<"."<<endl;
	
	vec.push_back(target);
	
	return;
}

//Function to ask user for coordinates and 
//values for width, height, side and radius and set them for 3D Shapes

void setTreeD(Shape* target, vector<Shape*>& vec){
	
	int posX, posY, posZ;
	int width, height, radius, side;
	
	cout << "Set coordination" <<endl;
	cout << "x: ";
	cin >> posX;
	cout << "y: ";
	cin >> posY;
	cout << "z: ";
	cin >> posZ;
	
	target->setPos(posX, posY, posZ);
	
	cout << "Pleaser enter width(base), height, side, and/or radius."<<endl;

    cout << " 1.Square(width) " << endl;
    cout << " 2.Rectangle(side)" << endl;
    cout << " 3.Triangle(width, height) " << endl;
    cout << " 4.Parallelogram(side, height)" << endl;
    cout << " 5.Trapezoid(width, side, height) " << endl;
    
    cout << " 6.Cylinder(radius, height) " << endl;
    cout << " 7.Sphere(radius) " << endl;
    cout << " 8.Cube(side) " << endl;
	
	cout << "Width: ";
	cin >> width;
	cout << "Height: ";
	cin >> height;
	cout << "Side: ";
	cin >> side;
	cout << "Radius: ";
	cin >> radius;
				
	target->setWidth(width);
	target->setHeight(height);
	target->setRadius(radius);
	target->setSide(side);
	
	cout<<"The area for \""<<target->getType()<<"\" is "<<target->getArea()<<"."<<endl;
	cout<<"The volume for \""<<target->getType()<<"\" is "<<target->getVolume()<<"."<<endl;
	
	vec.push_back(target);
	
	return;
}


void two(vector<Shape*>& vec){
	if(vec.size()<1){
        cout<<"The 2D list is empty."<<endl;
        return;
    }
    
    cout<<"*** List of two dimension objects ***"<<endl;
	
	Shape* target;
	for(int i=0;i<vec.size();i++){
		target = vec[i];
		cout<<i+1<<": "<<target->getType()<<" has area of "<<target->getArea()<<"."<<endl;
        target->getPos();
	}
    cout<<"*** End of two dimension object list ***"<<endl;	
	return;
}

void tree(vector<Shape*>& vec){
	if(vec.size()<1){
        cout<<"The 3D list is empty."<<endl;
        return;
    }
	cout<<"*** List of three dimension objects ***"<<endl;
	
	Shape* target;
	for(int i=0;i<vec.size();i++){
		target = vec[i];
		cout<<i+1<<": "<<target->getType()<<" has area of "<<target->getArea()<<" and volume "<<target->getVolume()<<"."<<endl;
        target->getPos();
	}	
    cout<<"*** End of three dimension object list ***"<<endl;
	return;
}