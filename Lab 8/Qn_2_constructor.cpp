//WAP to illustrate Constructor in base class

#include<iostream>
using namespace std;

class base
{
    protected:
    int count;

    public:
    base()
    {
        count = 0;
    }

    void show()
    {
        cout<<"count = "<<count<<endl;
    }

    void operator ++()
    {
        count++;
    }

};

class derived: public base{
    public:
    void operator --()
    {
        count --;
    }
};

int main()
{
    derived obj1;
    ++obj1;
    ++obj1;
    obj1.show();
    --obj1;
    obj1.show();
    return 0;
}