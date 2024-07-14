/*WAP to find the result of a student where marks are
taken from a parametrized constructor. Also, there are two methods called
calcDiv and result. The calcDiv method returns the total mark. This total mark
is passed to the result method and then the student’s division is displayed.
The constructor is used outside the class.*/

#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    Student(int m)
    {
        marks = m;
    }

    int calcDiv()
    {
        return marks;
    }

    void result(int total)
    {
        if (total >= 90)
        {
            cout << "Distinction" << endl;
        }
        else if (total >= 75 && total < 90)
        {
            cout << "First Class" << endl;
        }
        else if (total >= 60 && total < 75)
        {
            cout << "Second Class" << endl;
        }
        else if (total >= 50 && total < 60)
        {
            cout << "Third Class" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }
};

int main()
{
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;
    Student s(marks);
    int total = s.calcDiv();
    s.result(total);
    return 0;
}
