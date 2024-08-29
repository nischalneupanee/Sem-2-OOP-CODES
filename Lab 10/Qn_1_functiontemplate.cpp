//WAP to illustrate function template 

#include<iostream>
using namespace std;

template <class T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    cout << "Maximum of 10 and 20 is: " << maximum(10, 20) << endl;
    cout << "Maximum of 10.5 and 20.5 is: " << maximum(10.5, 20.5) << endl;
    return 0;
}
