// WAP to illustrate Constructor in
// multiple inheritance

#include<iostream>
#include<stdlib.h>
using namespace std;

class Base1
{
public:
    Base1()
    {
        cout << "Base1 class constructor called." << endl;
    }
};

class Base2
{
public:
    Base2()
    {
        cout << "Base2 class constructor called." << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    Derived()
    {
        cout << "Derived class constructor called." << endl;
    }
};

int main()
{
    Derived obj;
    return 0;
}
