// WAP to demonstrate the concept of const argument.
#include <iostream>
using namespace std;

void func(int &x, const int &y)
{

    x = 100; // Valid
    // y=200; // error since y is constant argument
    cout << x;
}
int main()
{

    int a = 10, b = 20;
    func(a, b);
    return 0;
}
