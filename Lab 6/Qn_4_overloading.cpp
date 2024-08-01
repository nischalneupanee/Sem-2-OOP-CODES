//Overloading insertion(<<) and  extraction(>>) operator

#include <iostream>
using namespace std;

class point
{
private:
    int x, y;

public:
    point(int x = 0, int y = 0) : x(x), y(y) {}

    friend ostream &operator<<(ostream &out, const point &p)
    {
        out << "x: " << p.x << "y: " << p.y << endl;
        return out;
    }
    friend istream &operator>>(istream &in, point &p)
    {
        cout << "Enter x and y coordinates: ";
        in >> p.x >> p.y;
        return in;
    }
};

int main()
{
    point p1(3, 4);
    point p2(1, 2);

    cout << p1;
    cout << p2;

    cin >> p1;
    cout << p1;

    return 0;
}
