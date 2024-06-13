//Write a C++ program to reverse a given number.
#include<iostream>
using namespace std;
int main()
{
    int num,rev = 0,rem;
    cout<<"Enter the number : ";
    cin>>num;
    
    while (num>0)
    {
        rem = num%10;
        num /=10;
        rev = rev * 10 + rem;
    }

    cout<<"The reverse of the number is: "<<rev;
    
}