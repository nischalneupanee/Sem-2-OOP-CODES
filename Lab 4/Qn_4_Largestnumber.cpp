/*WAP to find the largest among three numbers using a
parametrized constructor.*/
#include <iostream>
using namespace std;

class Largest
{
    int num1, num2, num3;

public:
    Largest(int n1, int n2, int n3)
    {
        num1 = n1;
        num2 = n2;
        num3 = n3;
    }

    int findLargest()
    {
        if (num1 > num2 && num1 > num3)
        {
            return num1;
        }
        else if (num2 > num1 && num2 > num3)
        {
            return num2;
        }
        else
        {
            return num3;
        }
    }

    int getNum1() const
    {
        return num1;
    }

    int getNum2() const
    {
        return num2;
    }

    int getNum3() const
    {
        return num3;
    }
};

int main()
{
    int n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    Largest l(n1, n2, n3);
    int largest = l.findLargest();
    cout << "The largest number is: " << largest << endl;
    return 0;
}
