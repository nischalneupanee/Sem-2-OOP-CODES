//WAP to illustrate simple example using try catch and throw. of exception handling

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    try
    {
        if(b == 0)
        {
            throw "Division by zero!";
        }
        else
        {
            cout << "Division is: " << a / b << endl;
        }
    }
    catch(const char* msg)
    {
        cout << msg << endl;
    }
    return 0;
}

