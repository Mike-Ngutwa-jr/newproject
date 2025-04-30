// Include the header file for Square
#include "Square.h"

// Put the implementation inside the shapes namespace
namespace shapes {

    // Default constructor implementation 
    Square::Square() : sidelength(0.0){}

    // Overloaded constructor implementation
    Square::Square(double side) : sideLength(side){}

    // Destructor implementation
    Square::~Square(){}

    // Getter method
    double Square::getSideLength()const{
        return sideLength;
    }

    // Setter method
    void Square::setSideLength(double side){
        sideLength = side;
    }
    }
