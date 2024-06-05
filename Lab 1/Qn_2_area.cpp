#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    float radius,area,circumference;
    float perimeter, length, breadth;
    
    cout<<"For circle\n";
    cout<<"Enter the radius\n";
    cin>>radius;
    float pi = 3.14;

    area = pi*pow(radius,2);
    cout<<fixed<<setprecision(5);
    cout<<"The area of circle is "<<area<<"\n";
    circumference = 2*pi*radius;
    cout<<"The circumference of circle is "<<area<<"\n";
    cout<<"\n";

    cout<<"For rectangle\n";
    cout<<"Enter the length\n";
    cin>>length;
    cout<<"Enter the breadth\n";
    cin>>breadth;
    
    area = length*breadth;
    cout<<"The area of rectangle is "<<area<<"\n";
    perimeter = 2*(length+breadth);
    cout<<"The perimeter of circle is "<<perimeter<<"\n";
    cout<<"\n";

    cout<<"For square\n";
    cout<<"Enter the length\n";
    cin>>length;
    
    area = length*length;
    cout<<"The area of rectangle is "<<area<<"\n";
    perimeter = 4* length;
    cout<<"The perimeter of circle is "<<perimeter<<"\n";

    
}