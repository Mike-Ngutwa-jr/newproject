#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () 
{

    // Used for random number generation 
    Srand (time(0));

    //Generate random numbers between 0 and 11
    int daysUntilExpiration = rand() % 12;

    if (daysUntilExpiration <= 1){
        cout << "Your subscription expires within a day! \n" << "Renew now and save 20%!" << endl;
}
else if (daysUntilExpiration <= 5 ){
cout << "Your Subscription Expires in " ;
cout << daysUntilExpiration << "days" << endl;
cout << "Renew now and save 10%!" << endl;
}
else if (daysUntilExpiration == 0){
    cout << "Your Subscription has expired." << endl;
}
else {
    cout << "You have active Subscription." << endl;
}

return 0;
}