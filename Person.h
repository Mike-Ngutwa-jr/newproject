#pragma once

#include <iostream>

using namespace std;

class Person{
    public:
    Person();
    Person(float newWeight);

    ~Person();
    // Overload the add operator 
    float operator + (const Person& otherPerson);
   
    private:
    float Weight;
    string mFirstName;
    int mAge;
};