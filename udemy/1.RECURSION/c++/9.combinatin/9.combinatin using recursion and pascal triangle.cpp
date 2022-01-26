/*  n c r = n!/(r (n-r)! )

            pascal triangle
                        1
                    1      1
                  1     2     1
                1   3      3     1
              1   4    6      4    1
            1   5   10    10    5    1
*/

#include "F:\ANMOL\studies\c coding\c++\udemy\1.RECURSION\c++\header.h"
#include <iomanip>

long long unsigned int combination(int n, int r)
{
    if (r == 0 || r == n)
        return 1;

    long long unsigned int t1 = 0, t2 = 0;
    /*
        if n= 5 and r=3
        then (5 c 3) = (4 c 2) + (4 c 3);
    */
    t1 = combination(n - 1, r - 1);
    t2 = combination(n - 1, r);
    return (t1 + t2);
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