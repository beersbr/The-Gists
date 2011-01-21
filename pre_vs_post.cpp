// Shows the difference between the pre operator and the post operator

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	// The first thing to realize is that they are both different ++var is not the same as var++
	// we will start with a variable
	
	int var = 5;
	
	printf("VAR: %d\n", var);
	
	// This will show the variable and then increment the variable after we have done an action with it.
	// you might think that the second arg will be 11, it will not. And since printf handles arguments 
	// backwards, the first number will actually be six and the second will be 10.
	
	printf("Var post(%d): %d\n", var, (5 + (var++)));
	
	// Now what happens if we put the increment at the beginning?
	
	var = 5;
	printf("VAR: %d\n", var);
	printf("Var post(%d): %d\n", var, (5 + (++var)));
	
	// You will notice that the variable is changed before we do any action on it.
	// As a side note they are really good to use because they produce less instructions
	// and as a result your program will run faster. Samll steps :)
		
	exit(0);
}