#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv){

	if(argc < 2)
		exit(0);

	int length = strlen(argv[1]);

	for(int j = 0; j < length; j++){
		char t = argv[1][j]; // Operate on one character at a time.
		for(int i = 7; i >= 0; i--){ // There are only 8 bits in byte and a character is 1 byte
			printf("%d",(t>>i)&1);  // Do some bit shifting to get the binary value.
		}
		printf(" ");
	}

	cout << endl;
	exit(0);
}