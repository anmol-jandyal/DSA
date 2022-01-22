/* e^x = 1 + pow(x,1)/1 + pow(x,2)/2! + pow(x,3)/3! +   ............. n terms
 * more terms more precision
 */

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

/*
long double pow(int x, int n)
{
    long double res = 1;
    if (n == 0)
    {
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        res = res * x;
    }
    return res;
}

long double fac(int n)
{
    long double res = 1;

    if (n == 0)
    {
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

long double ex(int x, int n)
{
    if (x == 0)
        return 1;
    else
    {
        if (n == 1)
            return 1;

        return {(pow(x, n - 1) / fac(n - 1)) + ex(x, n - 1)};
    }
}*/

//without factorial and power functions

long double ex(int x, int n)
{
    if (x == 0)
        return 1;
    else
    {
        static long double p = 1.0, f = 1.0;
        long double r = 1.0;
        if (n == 1)
            return 1;

        r = ex(x, n - 1);
        p = p * x;
        f = f * (n - 1);
        return p / f + r;
    }
}
int main()
{
    int x = 0, n = 0;

    cout << "e^x = 1 + pow(x,1)/1 + pow(x,2)/2! + pow(x,3)/3! +   ............. n terms\n";
    cout << "note for more precision enter n greater than 10\nenter x:";
    cin >> x;
    cout << "\nenter no. of terms wanted:";
    cin >> n;

    if (n < 0) //no. of terms cannot  be negative
        return 1;

    cout << std::fixed;
    cout << "\n\n e^" << x << " = " << std::setprecision(20) << ex(x, n);

    return 0;
}