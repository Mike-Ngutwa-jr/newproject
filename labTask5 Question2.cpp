#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main (){

    // used for ranndom number generation 
    Srand(time(0))
    
    // Generate random number between 0 and 11
    int daysUntilExpiration = rand() % 12;

    switch (daysUntilExpiration){
        case 0:
        cout << "Your Subscription has expired. " << endl;
        break;

        case 1:
        cout << "Your subscription expires within a day! \n";
        cout << "Renew now and save 20%" << endl;
        break;

        case 2:
        case 3:
        case 4:
        case 5:
        cout << "Your Subscription expires in ";
        cout << daysUntilExpiration;
        cout << "days " << endl;
        cout << "Renew now and save 10%!" << endl;
        break;
        
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        cout << "Your Subscription will expire soon. Renew now!" << endl;
        break;

        default:
        cout << "You have an active Subscription " << endl;
    }

    return 0;

}