#include <iostream>
#include <cstdlib>
using namespace std;

// Objects using the virtual method in the parent to the let the child define the methods behavior
class class_virtual_A{
public:
	virtual void print(){
		cout << "Class A" << endl;
	};
};

class class_virtual_B: public class_virtual_A{a
public:
	void print(){
		cout << "Class B" << endl;
	};
};

class class_virtual_C: public class_virtual_A{
public:
	void print(){
		cout << "Class C" << endl;
	};
};

// Objects not using the virtual method from the parent
class class_A{
public:
	void print(){
		cout << "Class A" << endl;
	};
};

class class_B: public class_A{
public:
	virtual void print(){
		cout << "Class B" << endl;
	};
};

class class_C: public class_A{
public:
	virtual void print(){
		cout << "Class C" << endl;
	};
};

int main()
{
	cout << "Using a regular method in the parent makes the pointer use the parents version of the method." << endl;
	class_A *b, *c;
	b = new class_B;
	c = new class_C;
	b -> print();
	c -> print();
	
	cout << endl;
	cout << "Using virtual methods we get to the let the child class define the fucntions behavior." << endl;
	class_virtual_A *vb, *vc;
	vb = new class_virtual_B;
	vc = new class_virtual_C;
	vb -> print();
	vc -> print();
	
	exit(0);
}