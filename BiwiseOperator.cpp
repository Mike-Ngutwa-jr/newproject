#include <iostream>
using namespace std;

main () {
unsigned int a = 60; //60 = 00111100
unsigned int b = 13;  // 13 = 00001101
int c = 0;

c = a & b;  // 00001100
cout << "Line 1 - value of c is : " << c << endl;

c = a | b;   // 61 = 00111101
cout << "Line 2 - value of c is: " << c << endl;

c = a ^ b;  // 49 = 00110001
cout << "Line 3 - value of c is: " << c << endl;

c = ~a;  // -61 = 11000011
cout << "Line 4 - value of c is: " << c< endl;

c = a << 2;  //  240 = 111 0000
cout << "Line 5 - value of c is: " << c << endl;

c = a << 2;  // 15 = 00001111
cout << "Line 6 - value of c is: " << c << endl;
return 0;
}