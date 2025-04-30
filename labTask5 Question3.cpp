#include <iostream>
#include <string>
using namespace std;

int main (){
    // Declare an array and initialize it
    string arr[] = {"B123", "C234", "A343", "C15", "B177", "G3003", "C235", "B179"};

    // Get number of elements in an array named "arr"
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrSize; ++i){
        if (arr[i][0] == 'B'){
            cout << arr[i]c << endl;
                }
    }
    
    return 0;
}