// Overloading relational operator(>)

#include <iostream>
using namespace std;

class point
{
private:
    int x, y;

public:
    point(int x = 0, int y = 0) : x(x), y(y) {}

    bool operator>(const point &p) const
    {
        return (this->x > p.x && this->y > p.y);
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

    if (p1 > p2)
    {
        cout << "p1 is greater than p2" << endl;
    }
    else
    {
        cout << "p1 is not greater than p2" << endl;
    }
    return 0;
}
