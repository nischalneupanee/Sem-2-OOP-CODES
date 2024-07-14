/*WAP to find the
largest among three numbers using the default constructor where a method checkLarge
returns the largest number which is displayed by displayLarge.*/

#include <iostream>
using namespace std;

class Largest
{
    int a, b, c;

public:
    Largest()
    {
        a = 0;
        b = 0;
        c = 0;
    }
    void setValues(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void checkLarge(int x, int y, int z)
    {
        if (x > y && x > z)
        {
            setValues(x, 0, 0);
        }
        else if (y > x && y > z)
        {
            setValues(0, y, 0);
        }
        else
        {
            setValues(0, 0, z);
        }
    }
    void displayLarge()
    {
        if (a != 0)
        {
            cout << "Largest number is: " << a << endl;
        }
        else if (b != 0)
        {
            cout << "Largest number is: " << b << endl;
        }
        else
        {
            cout << "Largest number is: " << c << endl;
        }
    }
};

int main()
{
    Largest l;
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    l.checkLarge(x, y, z);
    l.displayLarge();
    return 0;
}