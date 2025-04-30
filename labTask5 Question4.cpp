#include <iostream>
using namespace std;

int main (){
    int choiceNumber;
    bool valid_input = false;

    while (!valid_input){
        cout << "Please enter an integer value between 5 and 10 ";
        cin << choiceNumber;

        if (cin .fail() || choiceNumber < 5 || choiceNumber > 10 ){
            cout << "Invalid input. Please enter an integer between 5 and 10 " << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
        else {
            valid_input = true;
        }
    }
    cout << "Your input value ( " << choiceNumber << " ) has been accepted " << endl;
    return 0;
}