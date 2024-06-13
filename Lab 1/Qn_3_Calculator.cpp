//Write a C++ program to create a simple calculator that can add, subtract, multiply, and divide two numbers.
#include <iostream>
using namespace std;

int main()
{
    char option;
    int num1, num2;
    cout << "Enter first and second number: ";
    cin >> num1 >> num2;
    cout << "Enter a- addition s- subtraction d- division m- multiplication: \n";
    cin >> option;

    switch (option)
    {
    case 'a':
        cout << num1 + num2;
        break;

    case 's':
        cout << num1 - num2;
        break;

    case 'd':
        cout << num1 / num2;
        break;

    case 'm':
        cout << num1 * num2;
        break;

    default:
        break;
    }
    
    return 0;
}