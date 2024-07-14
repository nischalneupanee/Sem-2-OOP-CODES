/*WAP to calculate the area of a rectangle using a
default constructor where the constructor and methods are defined outside the
class.*/

#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    Rectangle();
    int area();
    int getLength() const;
    int getBreadth() const;
};

Rectangle::Rectangle()
{
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::getLength() const
{
    return length;
}

int Rectangle::getBreadth() const
{
    return breadth;
}

int main()
{
    Rectangle r;
    cout << "The area of the rectangle is: " << r.area() << endl;
    return 0;
}
