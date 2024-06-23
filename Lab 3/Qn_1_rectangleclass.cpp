// Define a class called Rectangle that has two private data members: length and width. Include member function to set and get these values, and another member function to calculate area of the rectangle.
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    void set()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void get()
    {
        int result = area();
        cout << "The area of the rectangle: " << result;
    }

    int area()
    {
        int area = length * breadth;
        return area;
    }
};

int main()
{
    Rectangle r1;
    r1.set();
    r1.get();
}