// This program demonstrates bitfields and a neat way to get the binary
// representation of a data type

#include <iostream>
#include <cstdlib>
using namespace std;

// we are using a union because of its properties. Each field shares the memory. So a char being 8 bits will share
// the memory with the next data type in the union. That dataype or data structure is our 'bits' struct which is
// composed of 8 fields sized at 1 bit a piece. They are named appropriately.

union datastruct{
	unsigned char some_data; // A char is 8 bits. We are using it because it is small
	struct{
		// These are the bit fields
		// we are using unsigned fields so there is no sign bit in our memory of 1 bit :p
		unsigned b7 :1;
		unsigned b6 :1;
		unsigned b5 :1;
		unsigned b4 :1;
		unsigned b3 :1;
		unsigned b2 :1;
		unsigned b1 :1;
		unsigned b0 :1;
	}bits;
};

int main()
{
	union datastruct my_data_struct;
	
	// here we put the number we want to have as binary
	my_data_struct.some_data = 19;

	printf("%d ", my_data_struct.bits.b0);
	printf("%d ", my_data_struct.bits.b1);
	printf("%d ", my_data_struct.bits.b2);
	printf("%d ", my_data_struct.bits.b3);
	printf("%d ", my_data_struct.bits.b4);
	printf("%d ", my_data_struct.bits.b5);
	printf("%d ", my_data_struct.bits.b6);
	printf("%d ", my_data_struct.bits.b7);

	printf("\r\n");
	exit(0);
}

/* The output will be:
	0 0 0 0 1 1 1 1 => that is the binary representation of 15
	0 0 0 1 0 0 1 1 => which is 19
	
	Because the data type is only a char or 8 bits we have to use a number that is inside
	that range or we will get some strange results. But try it for yourself.
	
	Have fun!
*/
