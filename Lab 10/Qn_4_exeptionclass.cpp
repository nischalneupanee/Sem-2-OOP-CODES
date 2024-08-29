//WAP ro illustrate exception class

#include<iostream>
using namespace std;

class MyException
{
    public:
        MyException(string msg)
        {
            cout << msg << endl;
        }
};

int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    try
    {
        if(b == 0)
        {
            throw MyException("Division by zero!");
        }
        else
        {
            cout << "Division is: " << a / b << endl;
        }
    }
    catch(MyException e)
    {
        cout << "Exception caught!" << endl;
    }
    return 0;
}
