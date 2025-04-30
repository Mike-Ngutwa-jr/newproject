#include <iostream>
using namespace std;

int main()
{

    int firstValue;
    int secondValue;

    int* pP ointer = nullptr;

    // Assign pointer with the address of first value
    pPointer = &firstValue;
   
   // Indirection
    *pPointer = 10;

    // Assign pointer with the address of the second value
    pPointer = &secondValue;
    
    // Indirection 
    *pPointer = 20;

    cout << "firstValue is " << firstValue << "\n";
    cout << "secondValue is " << secondValue << endl;
    
    return 0;
}   