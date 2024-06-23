/* Design a class time so that it perform
following task as: (hr1,min1,sec1)+(hr2,min2,sec2) and display the appropriate
result by using:
Object passing by value

Object passing by reference

Object passing by address*/

#include <iostream>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

    void normalize() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
    }

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {
        normalize();
    }

    void display() const {
        cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }

    Time operator+(const Time& t) const {
        return Time(hours + t.hours, minutes + t.minutes, seconds + t.seconds);
    }

    void addByValue(Time t) {
        *this = *this + t;
    }

    void addByReference(const Time& t) {
        *this = *this + t;
    }

    void addByAddress(const Time* t) {
        *this = *this + *t;
    }
};

int main() {
    Time t1(1, 30, 45);
    Time t2(2, 35, 20);

    // Object passing by value
    Time t3 = t1;
    t3.addByValue(t2);
    cout << "Result by Value: ";
    t3.display();

    // Object passing by reference
    Time t4 = t1;
    t4.addByReference(t2);
    cout << "Result by Reference: ";
    t4.display();

    // Object passing by address
    Time t5 = t1;
    t5.addByAddress(&t2);
    cout << "Result by Address: ";
    t5.display();

    return 0;
}
