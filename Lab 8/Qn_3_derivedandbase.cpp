//WAP to illustrate base and derived class constructor

#include<iostream>
using namespace std;


class pet
{
    protected:
    int P_count;

    public:
    pet(int n)
    {
        P_count = n;
    }

};

class dog: public pet
{
    protected:
    int d_count;

    public:
    dog(int num,int n): pet(n)
    {
        d_count = num;
    }

    void showdata()
    {
        cout<<"Pet count: "<<P_count<<endl;
        cout<<"Dog count: "<<d_count<<endl;
    }
    
};

int main()
{
    dog d1(5,10);
    d1.showdata();
    return 0;
}