/* Write a program defining the class Distance with data member feet and inch as integer. Overload the constructors along with copy
constructor. Use the member functions for input and output as well as to compute the sum of the two objects and
return the sum. Show read/write operations in main() using above
information.*/
#include <iostream>
using namespace std;

class Distance
{
    int feet, inch;

public:
    Distance()
    {
        cout << "Enter the feet: ";
        cin >> feet;
        cout << "Enter the inch: ";
        cin >> inch;
    }

    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }

    Distance(const Distance &d)
    {
        cout << "The sum of the two distances is: " << d.feet + d.inch << endl;
    }

    int getFeet() const
    {
        return feet;
    }

    int getInch() const
    {
        return inch;
    }
};

int main()
{
    Distance d1;
    Distance d2(5, 6);
    Distance d3 = d1;
    return 0;
}
