// Using C/C++

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  int a = 5;
  int b = 9;

  printf("a: %d\tb: %d\n", a, b);

  a = a + b; // => a = 14
  b = a - b; // => b = 5
  a = a - b; // => a = 9

  printf("a: %d\tb: %d\n", a, b);

  // Lets switch them back using method 2
  // We are going to use bit manipulation in this method. So to start off
  // I will show the binary representation of the values of 'a' and 'b'

  // a => 1001 - we will forgo the other 28 bits
  // b => 0101

  a = a^b; // a => 1100 - 12
  b = b^a; // b => 1001 - 9
  a = a^b; // a => 0101 - 5

  // Now we have switched them back using bit operators!
  printf("a: %d\tb: %d\n", a, b);

  // This is sometimes useful when you only have a limited amount of memory to work with.
  // But it's also just fun to use anyway! :) Happy coding.

}
