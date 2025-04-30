#include <iostream>

int main(){
int varA = 25;
int varB = 100;

//varA is 25
cout << "varA before swap: " << varA << endl; 

//varB is 100
cout << "VarB before swap: " << varB << endl; 
SwapNumbers(varA, varB);

//varA is 100
cout << "varA after swap: " << varA << endl; 

//varB is 25
cout << "VarB after swap: " << varB << endl; 
return 0;
}