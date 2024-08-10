//  WAP to increment the Time object of class Time
// with data member hour, min and sec by 1 second using operator overloading for
// increment ++ in pre-increment and post increment form. Display the value of
// time before and after increment. 

#include <iostream>
using namespace std;

class Time
{
private:
    int hour, min, sec;
    
public:
    Time(int hour = 0, int min = 0, int sec = 0) : hour(hour), min(min), sec(sec) {}

    Time operator++()
    {
        sec++;
        if (sec >= 60)
        {
            sec = 0;
            min++;
            if (min >= 60)
            {
                min = 0;
                hour++;
                if (hour >= 24)
                {
                    hour = 0;
                }
            }
        }
        return *this;
    }

    Time operator++(int)
    {
        Time temp = *this;
        sec++;
        if (sec >= 60)
        {
            sec = 0;
            min++;
            if (min >= 60)
            {
                min = 0;
                hour++;
                if (hour >= 24)
                {
                    hour = 0;
                }
            }
        }
        return temp;
    }

    void display() const
    {
        cout << "Time: " << hour << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    Time t1(23, 59, 59);
    Time t2(23, 59, 59);

    cout << "Time before increment: " << endl;
    t1.display();
    t2.display();

    cout << "Time after pre-increment: " << endl;
    ++t1;
    t1.display();

    cout << "Time after post-increment: " << endl;
    t2++;
    t2.display();

    return 0;
}
