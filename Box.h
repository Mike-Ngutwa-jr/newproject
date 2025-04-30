#pragma once
#include <iostream>
using namespace std;

class Box {
public:

Box();

Box(const double newLength, const newBreadth, double newHeight);

~Box();

double GetVolume();

void SetLength(double len);

void SetBreadth(double bre);

void SetHeight(double hei);

// overload + operator to add two Box objects
Box operator+(const Box& b);

private:

double length; // Length of a box
double breadth; // Breadth of a box
double height // Height of the box 
};
