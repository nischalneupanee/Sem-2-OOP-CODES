//WAP to demonstrate the concept of namespace and using namespace directive.
#include <iostream>
using namespace std;
namespace first 
{
    int a = 100;
    int b = 200;
}

namespace second 
{
    int a = 300;
    int b = 400;
}

int main()
{
    using namespace first;
    std::cout << "a: " << a << ", b: " << b << std::endl;
    std::cout << "a: " << second::a << ", b: " << second::b << std::endl;
    return 0;
}
