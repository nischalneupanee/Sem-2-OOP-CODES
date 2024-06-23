/*Design a class so that it can incorporate
nested member function.*/
#include <iostream>
using namespace std;

class Outer {
private:
    int outerValue;

    class Inner {
    private:
        int innerValue;

    public:
        Inner(int val) : innerValue(val) {}

        void showInnerValue() {
            cout << "Inner Value: " << innerValue << std::endl;
        }
    };

    Inner inner;

public:
    Outer(int val) : outerValue(val), inner(val) {}

    void showOuterValue() {
        cout << "Outer Value: " << outerValue << std::endl;
    }

    void showInner() {
        inner.showInnerValue();
    }
};

int main() {
    Outer outerObj(5);
    outerObj.showOuterValue();
    outerObj.showInner();
    return 0;
}
