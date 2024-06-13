//Write a C++ program to add two numbers using functions.
#include<iostream>
using namespace std;

int add(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    int a, b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    int result = add(a,b);
    cout<<"The addition is "<<result;
}