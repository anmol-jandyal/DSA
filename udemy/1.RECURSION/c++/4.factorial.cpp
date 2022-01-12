#include <iostream>
using std::cin;
using std::cout;

unsigned long long int fac(int n)
{
    if (n == 2)
        return 2;
    else if (n == 0)
        return 1;
    else
        return n * fac(n - 1);
}
int main()
{
    int n;
    cout << "enter n";
    cin >> n;

    if (n > 0)
    {
        cout << "factorial = " << fac(n);
        }

    return 0;
}