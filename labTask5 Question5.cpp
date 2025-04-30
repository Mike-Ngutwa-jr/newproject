#include <iostream>
#include <cmath>
using namespace std;

// function prototype
void calculateTriangleArea();
void calculateRectangleArea();
void calculateSquareArea();

int main (){
    int choice;

    do {
        cout << "Select a shape to calculate the area: "<< endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;

        cout << "Enter your choice (1, 2 or 3): ";
        cin >> choice;
        switch (choice){
            case 1:
            calculateTriangleArea();
            break;

            case 2:
            calculateRectangleArea();
            break;

            case 3:
            calculateSquareArea();
            break;

            defualt:
            cout << "Invilid input. Please enter a valid choice. " << endl;
        }
        char anotherChoice;
        cout << "Do you want to calculate the area of another shape (Y/N): ";
        cin >> anotherChoice;
    }

    while (anotherChoice == 'Y' || anotherChoice == 'y')

    return 0;
}
void calculateTriangleArea(){
    double base;
    double height;
    double area;
    cout << "Enter the base of the traingle ";
    cin >> base;
    cout << "Enter the height of the triangle ";
    cin >> height;
    area = 0.5 * base * height;
    cout << "The area of the triangle is: " << area << endl;
}

void calculateRectangleArea(){
    double length;
    double width;
    double area;
    cout << "Enter the length of the rectangle ";
    cin >> length;
    cout << "Enter the width of the reactangle ";
    cin >> width;
    area = length * width;
    cout << "The area of the Triangle is: " << area << endl;
}

void calculateSquareArea(){
    double side;
    cout >> side;
    double area;
    area = side * side;
    cout << "The area of the Square is: " << area << "\n";
}