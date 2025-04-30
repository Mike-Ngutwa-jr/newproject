// Prevent multiple inclusion of this header file 
#ifndef CIRCLE_H
#define CIRCLE_H

// Declare everything inside shapes namespace
namespace shapes {

    // define the Cicrle class
    class circle {
        private:
        // Private member variable for the radius of the circle
        double radius;

        public:
        // Default constructor
        Circle();

        // Overloaded constructor 
        Circle( double r);

        // Destructor 
        ~Circle();

        // Accessor method to get the radius
        double getRadius() const;

        // Setter mthed to set the radius
        void setRadius(double r);

    };
}
#endif