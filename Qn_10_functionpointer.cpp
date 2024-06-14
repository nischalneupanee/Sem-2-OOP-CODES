//WAP to demonstrate the concept of function pointer.
#include <iostream>

using namespace std;


void add(int a, int b);
void subtract(int a, int b);

int main() {
    
    void (*func_ptr)(int, int);

    
    func_ptr = add;
    
    cout << "Calling add function using function pointer:" << endl;
    func_ptr(5, 3);

    
    func_ptr = subtract;
    
    cout << "Calling subtract function using function pointer:" << endl;
    func_ptr(5, 3);

    return 0;
}


void add(int a, int b) {
    cout << "Addition: " << (a + b) << endl;
}

void subtract(int a, int b) {
    cout << "Subtraction: " << (a - b) << endl;
}
