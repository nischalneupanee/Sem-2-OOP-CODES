//WAP to illustrate Inheritance (one base and one derived class)
#include<iostream>
using namespace std;

class Employee
{
    protected:
    string name1;

    public:
    Employee(string name)
    {
        name1 = name;
    }
};

class programmer : public Employee
{
    protected:
    string language;

    public:
    programmer(string lang , string name):Employee(name)
    {
        language = lang;
    }

    void getinfo()
    {
        cout<<name1<<language;
    }
};

int main()
{
    programmer p1("Python", "Nischal");
    p1.getinfo();
}