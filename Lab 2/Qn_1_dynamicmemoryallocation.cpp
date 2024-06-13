
//WAP to demonstrate the concept of DMA using new and delete
#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the size of integer: ";
    cin>> n;

    int *ptr = new (nothrow) int[n];
    if (ptr==NULL)
    {
        cout<<"Memory is not allocated";
    }

    for (int i = 0;i<n; i++)
    {
        cout<<"Enter number";
        cin>>ptr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<ptr[i]%2;
    }
    
    return 0;
}