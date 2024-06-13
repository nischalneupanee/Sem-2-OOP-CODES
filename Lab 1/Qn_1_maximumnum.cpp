//WAP to input 5 numbers and find the maximum number.
#include<iostream>
using namespace std;

int main()
{
    int n[5];
    cout<<"Enter five numbers: ";
    for (int i = 0; i <5; i++)
    {
        cin>>n[i];
    }

    int max = n[0];
    for (int i = 0; i <5; i++)
    {
        if (n[i]>max)
        {
            max = n[i];
        }
        
    }
    
    cout<<"The greatest number is :"<<max;
    return 0;
    
}