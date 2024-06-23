// WAP to demonstrate the concept of Pass by reference and return by reference.
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int &increment(int &num)
{
    num++;
    return num;
}

int main()
{
    int x = 100;
    int y = 200;
    cout << "Before sorting x = " << x << "y = " << y << endl;
    swap(x, y);
    cout << "After sorting x = " << x << "y = " << y << endl;

    cout << "Before increment: x = " << x << std::endl;
    int &result = increment(x);
    cout << "After increment: x = " << result << std::endl;

    return 0;
}