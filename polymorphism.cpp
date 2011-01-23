#include <iostream>
#include <cstdlib>
using namespace std;

// This is our base class
class Polygon{
protected:
	int x, y;
public:
	int set_xy(int x, int y = 0){
		this -> x = x;
		this -> y = y;
		return 1;
	};
};

class Square: public Polygon{
public:
	int area(){
		return x*x;
	};
};

class Rectangle: public Polygon{
public:
	int area(){
		return x*y;
	};
};

int main(){
	Square square;
	Rectangle rectangle;
	
	// Square and Rectangle can be used as the parent class.
	Polygon *poly_square = &square;
	Polygon *poly_rectangle = &rectangle;
	
	// set the variables
	poly_square->set_xy(2);
	poly_rectangle->set_xy(2,5);
	
	// output as if we set the variables from the child classes
	cout << "Square: " << square.area() << endl;
	cout << "Rectangle: " << rectangle.area() << endl;
	
	exit(0);
}