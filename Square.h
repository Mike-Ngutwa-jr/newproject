// Prevent multiple inclusion of this header file
#ifndef SQUARE_H
#define SQUARE_H

// Declare everything inside the shapes namespace

namespace shapes{

 // Define the square class
class Square{
    private:

    // Private member variable to the length of of the square
    double sideLength;

    public:
    // Default constructor (no parameters)
    square();

    // Overloaded constructor(takes side arg) 
    Square(double side)

    // Destructor (no special action needed here)
    ~Square();

    // Accessor method to get te side length
    double getSideLength() const;

    // setter method to set the side of length
    void setSideLength( double side);

};
}
#endif