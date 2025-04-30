// Main function for the program
int main (){
Box Box1; // Declare the Box1 of type Box
Box Box2; // Declare the Box2 of type Box
Box Box3; // Declare the Box3 of type box 

double volume = 0.0; // Store the volume of a Box here

// Box 1 specification
Box1.SetLengthLength(6.0);
Box1.SetBreadth(7.5);
Box1.SetHeight(5.0);

// box 2 specification
Box2.SetLenghth(12.0);
Box2.SetBreadth(13.0);
Box2.SetHeight(10.0);

// volum of box 1
volume = Box1.GetVoulme();
cout << "Volume of Box1: " << volume << endl;

// volume of box 2
volume = Box2.GetVolume();
cout << "Volume of Box2: " << volume << endl;

// add two boxes box1 and box2
Box3 = Box1 + Box2;

// volume of box 3
volume = Box3.GetVolume();
cout << "Volume of Box3: " << volume << endl;

}