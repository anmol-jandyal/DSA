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

void toh(int n, int a, int b, int c) //a form  b using   c to
{
    if (n > 0)
    {
        toh(n - 1, a, c, b);
        cout << "\n form " << a << " to " << c;
        toh(n - 1, b, a, c);
    }
}

int main()
{
    int n = 0;

    cout << "\n\n enter  no. of rings n (positive value):";
again_n:
    cin >> n;
    if (n < 0)
    {
        cout << "enter n +ve ";
        goto again_n;
    }

    cout << "steps to move from tower 1 to tower 3 one by one and also smaller ring not below larger one";

    toh(n, 1, 2, 3);

    return 0;
}