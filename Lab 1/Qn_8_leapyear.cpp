//Write a C++ program to check whether a given year is leap year or not.
#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the year ";
    cin>>year;

    if (year%400==0 && year%100!=0 &&year%4==0)
    {
        cout<<"Leap Year";
    }
    else
    {
        cout<<"Not a leap year";
    }
    
}