#ifndef TRIANGLE_H
#define TRIANGLE_H

// Declare everything inside the shapes namespace
namespace shapes{

    // define the Triangle class
    class Triangle{

        //private member variables
        private:
        double base;
        double height;

        public:
        // default constructor
        Triangle();

        // Overloaded constructor 
        Triangle(double b, double h);

        // Destructor 
        ~Triangle();

        // Accessor method to get the height
        double getHeight() const;

        //Setter method to set the base
        void setBase(double b);
        
        // Setter method to the height
        void setHeight(double h);

    };
}
#endif