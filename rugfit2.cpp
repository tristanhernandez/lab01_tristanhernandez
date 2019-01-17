// rugfit2.cpp - calculates fit of rug to a floor
// Tristan Hernandez, 16 Jan 2019

#include <iostream>
using namespace std;

// definition of class Rectangle
// (usually would be in a separate file named rectangle.h)
class Rectangle {

public:
    Rectangle(double w = 1.0, double l = 1.0);  //constructor
    double getWidth() const;    //accessors
    double getLength() const;
    void setWidth(double w);    //mutators
    void setLength(double l);
    double area() const;        //area function
     
private:
    double width, length;

}; // end of class definition

// implementation of class Rectangle here to main function
// (usually would be in a separate file named rectangle.cpp,
// and this separate file would #include "rectangle.h")

// IMPLEMENT CONSTRUCTOR USING INITIALIZATION LIST
Rectangle::Rectangle(double w, double l){
    width = w;
    length = l;
 }   
// IMPLEMENT ACCESSORS and MUTATORS
double Rectangle::getWidth() const{
    return width;
}

double Rectangle::getLength() const{
    return length;
}

void Rectangle::setWidth(double w){
    width = w;
}

void Rectangle::setLength(double l){
    length = l;
}

// IMPLEMENT THE AREA METHOD HERE
double Rectangle::area() const{
    return getLength() * getWidth();
}

// change main where instructed in UPPER CASE below
// (usually would #include "rectangle.h" before main)
int main() {
    
    double width, length;
    Rectangle rug(0,0); // will be updated below

    // create Rectangle named "floor" for sizes input by user
    cout << "enter width and length of floor: ";
    cin >> width >> length;
    const Rectangle floor(width, length); // note: const object

    // RESET Rectangle NAMED "rug" FOR SIZES INPUT BY USER
    cout <<"enter width and length of rug: ";
    cin >> width >> length;
    rug.setLength(length);
    rug.setWidth(width);
    
    
    // DO NOT CHANGE ANYTHING BELOW (if you do, you will earn 0 points,
    // no matter what submit.cs says is your "tentative" score)

    // print results
    cout << "floor area: " << floor.area() << endl;
    cout << "rug area: " << rug.area() << endl;
    double leftover = rug.area() - floor.area();
    cout << "leftover rug area: " <<
        (leftover > 0 ? leftover : 0) << endl;
    cout << "empty floor area: " <<
        (leftover < 0 ? -leftover : 0) << endl;

    return 0;
}
