#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;

long long double power(int m, int n)
{
    if (n >= 0)
    {
        if (n == 0)
            return 1;
        else
            return m * power(m, n - 1);
    }
    else
    {
        if (n == -1)
            return (1 / m);
        else
            return ((1 / m) * power(m, n + 1));
    }
}

int main()
{
    int n, m;
    cout << "enter m";
    cin >> m;
    cout << "enter power";
    cin >> n;

    cout << "\n"
         << m << " power " << n << " = " << std::setprecision(9) << power(m, n);

    return 0;
}