/* WAP to check if the number is Armstrong or not using a
default constructor where checkArm takes the entered number as an argument and
returns the Armstrong number which is confirmed by result.*/

#include <iostream>
#include <cmath>
using namespace std;

class Armstrong
{
    int num, sum, temp, rem;

public:
    Armstrong()
    {
        cout << "Enter a number: ";
        cin >> num;
        sum = 0;  
    }

    int checkArm()
    {
        temp = num;
        while (temp > 0)
        {
            rem = temp % 10;
            sum += pow(rem, 3); 
            temp /= 10;
        }
        return sum;
    }

    int getNum() const
    {
        return num;
    }
};

int main()
{
    Armstrong a;
    int result = a.checkArm();
    if (result == a.getNum())
    {
        cout << "The number is an Armstrong number." << endl;
    }
    else
    {
        cout << "The number is not an Armstrong number." << endl;
    }
    return 0;
}