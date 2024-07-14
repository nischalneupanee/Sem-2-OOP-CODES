/*8.WAP
to demonstrate the concept of destructor.*/

#include <iostream>
using namespace std;

class Destructor
{
    int num;

public:
    Destructor()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    ~Destructor()
    {
        cout << "The number is: " << num << endl;
    }
};

int main()
{
    Destructor d;
    return 0;
}
