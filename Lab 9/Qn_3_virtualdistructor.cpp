//WAP to illustrate virtual destructor

#include<iostream>
using namespace std;

class Base
{
    public:
        virtual ~Base()
        {
            cout<<"Destructor of Base class"<<endl;
        }
};

class Derived: public Base
{
    public:
        ~Derived()
        {
            cout<<"Destructor of Derived class"<<endl;
        }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    delete b;
    return 0;
}
