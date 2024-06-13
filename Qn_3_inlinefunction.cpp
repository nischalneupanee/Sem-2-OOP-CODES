// WAP to demonstrate the concept of Inline function.
#include <iostream>
using namespace std;

inline int mul(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int result = mul(a, b);
    cout << "The multiplication is " << result;
    return 0;
}