int main(){
    Person Jane = Person("Jane", 60.0);
    Person John = Person("John", 75.0);

    float totalWeight =  Jane + John;
    cout << "Total Weight: " << totalWeight << endl;


    if ( Jane == John ){

        cout << "This is the same person" << endl;
    }
    
    if ( Jane != John){

        cout << "This is NOT same person" << endl;
    }

    if ( Jane < John ){

        cout << "Jane is younger than John" << endl;
    
    }

    if ( John > Jane ){
        
        cout << "John is order than Jane" << endl;

    }

    operator int();

    int johnAge = John;
    cout << "John'S Age: " << johnAge << endl;
    
    string janeFirstName = Jane;
    cout << "Jane's weight: " << janeWeight << endl;
    return 0;

}