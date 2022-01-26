/*  sine(x)  = 0 + x - x^3/3! + x^5/5! - x^7/7! + ..............*/

#include "F:\ANMOL\studies\c coding\c++\udemy\1.RECURSION\c++\header.h"
#include <iomanip>
#define PI 3.141592

long double sine(long double x, int n)
{
    static long double p = -1;
    if (n == 1)
    {
        p = (-1) * p * x;
        return x;
    }

    static long long unsigned int f = 1;

    long double s = sine(x, n - 2);
    p = (-1) * p * x * x;
    f = f * n * (n - 1);
    return s + ((long double)p / f); //type casting to long double
}

int main()
{
    double x = 0;
    int n = 0;

    cout << "sine(x)  = 0 + x - x^3/3! + x^5/5! - x^7/7! + ..............\n\n";

    cout << "enter in degree x:";
    cin >> x;

    cout << "ENTER no. of terms (note enter n larger for accuracy)";
again_n:
    cin >> n;
    //if n<1 it again has to enter
    if (n < 1)
    {
        cout << "enter n >= 1";
        goto again_n;
    }
    x = (x * PI) / 180;

    cout << std::fixed;
    cout << std::setprecision(20);
    cout << "sine (" << x << ") = " << sine(x, n + (n - 1));
    /* x - x^3/3! + x^5/5! - x^7/7! 
    for n=1  largest power 1
        n=2  largest power 3
        n=3  largest power 5 so on*/

    return 0;
}
