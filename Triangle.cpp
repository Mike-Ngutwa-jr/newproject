// Include the header file inside the shapes namespace
#include "Triangle.h"

// put the implement inside the shapes namespace
namespace shapes{

    // Defualt constructor
    Triangle::Triangle() : base(0.0), height(0.0){}

    // Overload construtor 
    Triangle::Triangle( double b, double h) : base(b), height(h){}

    // Destructor implementation
    Triangle::~Triangle(){}

    // Getter method
    double Triangle::getBase() const {
        return base;
    }

    // Getter method: returns the current height of the Triangle
    double triangle::getHeight() const {
        return height;
    }

    //  Setter method: sets the base of the triangle to a new value
    void Triangle::setBase( double b ){
        base = b;
    }

    // Setter method: sets the height of the triangle to new value
    void Triangle::setHeight(double h){

    }
}