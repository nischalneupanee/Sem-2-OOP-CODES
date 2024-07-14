/*WAP to find the sum of two numbers where the first number is taken from a default constructor and the second number is taken from a
parametrized constructor. Compute the sum within a copy constructor and display
it.*/

#include <iostream>
using namespace std;

class Sum
{
    int num1, num2;

public:
    Sum()
    {
        cout << "Enter the first number: ";
        cin >> num1;
    }

    Sum(int n)
    {
        num2 = n;
    }

    Sum(const Sum &s)
    {
        cout << "The sum of the two numbers is: " << s.num1 + s.num2 << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the second number: ";
    cin >> n;
    Sum s1;
    Sum s2(n);
    Sum s3 = s1;
    return 0;
}
