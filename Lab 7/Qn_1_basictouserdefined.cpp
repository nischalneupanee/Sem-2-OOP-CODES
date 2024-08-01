// Basic to user defined

#include <iostream>
using namespace std;

class point
{
private:
    int x, y;

public:
    point(int x = 0, int y = 0) : x(x), y(y) {}

    point operator+(const point &p) const
    {
        point result;
        result.x = this->x + p.x;
        result.y = this->y + p.y;
        return result;
    }
    void display() const
    {
        cout << "x: " << x << "y: " << y << endl;
    }
};

int main()
{
    point p1(3, 4);
    point p2(1, 2);
    point p3 = p1 + p2;

    cout << "p1 + p2 = ";
    p3.display();
    return 0;
}