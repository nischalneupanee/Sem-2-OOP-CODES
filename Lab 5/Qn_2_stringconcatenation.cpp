//Concatenation string objects -> s1 +s2

#include <iostream>
#include <string>
using namespace std;

class stringconcatenation
{
private:
    string s;

public:
    stringconcatenation(string s = "") : s(s) {}

    stringconcatenation operator+(const stringconcatenation &s1) const
    {
        stringconcatenation result;
        result.s = this->s + s1.s;
        return result;
    }
    void display() const
    {
        cout << "s: " << s << endl;
    }
};

int main()
{
    stringconcatenation s1("Hello");
    stringconcatenation s2("World");
    stringconcatenation s3 = s1 + s2;

    cout << "s1 + s2 = ";
    s3.display();
    return 0;
}