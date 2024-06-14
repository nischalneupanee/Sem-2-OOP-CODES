// WAP to demonstrate the simple concept of pointer.
#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int *p;
    p = &i;
    cout << "Value of i: " << i << endl;
    cout << "Address of i: " << &i << endl;
    cout << "Value of i using pointer: " << *p << endl;
    cout << "Address of i using pointer: " << p << endl;
    return 0;
}