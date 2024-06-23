// Create class named Student that has the following private data members: name, roll_number, and marks (an array of 5 integers). Include member functions to:
// Set the student's details.
// Get the student's details.
//  Calculate the average marks of the student
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll_number;
    int marks[5];

public:
    void set()
    {
        cout << "Enter the data of student\n";
        cout<<"Name :";
        cin>>name;
        cout<<"Roll Number: ";
        cin>>roll_number;
        cout<<"Enter Marks:\n";
        for (int i = 1; i <= 5; i++)
        {
            cin >> marks[i];
        }
    }

    void get()
    {
        cout<<"\n\n\n";
        cout<<"Name :";
        cout<<name<<"\n";
        cout<<"Roll Number: ";
        cout<<roll_number<<"\n";
        int result = averageMarks();
        cout << "The average marks of the student is: " << result;
    }

    float averageMarks()
    {
        int sum = 0;
        for (int i = 1; i <= 5; i++)
        {
            sum += marks[i];
        }

        float average = sum / 5;
        return average;
    }
};

int main()
{
    Student s1;
    s1.set();
    s1.get();
}