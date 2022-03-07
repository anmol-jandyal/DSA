#include <iostream>
#include <iomanip>

int main()
{
    double a = 1.0, b = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
    std::cout << (a == b);

    std::cout << std::setprecision(20);
    std::cout << a << "  " << b << "  ";
}