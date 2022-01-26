/*  n c r = n!/(r (n-r)! )
*/

#include "F:\ANMOL\studies\c coding\c++\udemy\1.RECURSION\c++\header.h"
#include <iomanip>

long long unsigned int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long unsigned int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

long long unsigned int combination(int n, int r)
{
    long long unsigned int t1 = 0, t2 = 0, t3 = 0;

    t1 = fac(n);
    t2 = fac(n - r);
    t3 = fac(r);

    return (t1 / (t2 * t3));
}

int main()
{
    int n = 0, r = 0;

    cout << "combination formula = ncr= n!/(r (n-r)!";
    cout << "\n\n enter n (positive value):";
again_n:
    cin >> n;
    if (n < 0)
    {
        cout << "enter n +ve ";
        goto again_n;
    }
    cout << "\n\n enter r (positive value and less or equal to n) :";
again_r:
    cin >> r;
    if (r < 0 || r > n)
    {
        cout << "enter r +ve or less than n ";
        goto again_r;
    }
    cout << std::fixed << std::setprecision(5);
    cout << "\n\ncombination " << n << " c " << r << " = " << combination(n, r);
    return 0;
}