//Write a C++ program to demonstrate the usage of scope resolution operator.
#include<iostream>
using namespace std;

int x= 15;//global variable

int main()
{
    int x =25;//local variable
    cout<<x<<"\n";
    cout<<::x;
}