/*Design a class coordinate so that
it can add two coordinates as (x1,y1)+(x2,y2)*/
#include <iostream>

class Coordinate {
private:
    int x, y;

public:
    Coordinate(int x = 0, int y = 0) : x(x), y(y) {}

    int getX() const { return x; }
    int getY() const { return y; }

    Coordinate operator+(const Coordinate& other) const {
        return Coordinate(x + other.x, y + other.y);
    }

    void display() const {
        std::cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Coordinate c1(3, 4);
    Coordinate c2(1, 2);

    Coordinate c3 = c1 + c2;  

    std::cout << "c1: ";
    c1.display();
    std::cout << std::endl;

    std::cout << "c2: ";
    c2.display();
    std::cout << std::endl;

    std::cout << "c1 + c2 = c3: ";
    c3.display();
    std::cout << std::endl;

    return 0;
}