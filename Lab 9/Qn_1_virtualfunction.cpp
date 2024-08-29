//WAP to illustrate virtual function using inheritance 

#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void display()
        {
            cout<<"Display of Base class"<<endl;
        }
};

class Derived: public Base
{
    public:
        void display()
        {
            cout<<"Display of Derived class"<<endl;
        }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->display();
    return 0;
}