/* series = 0 1 1 2 3 5 8 13 ..........*/

#include "F:\ANMOL\studies\c coding\c++\udemy\1.RECURSION\c++\header.h"

void fib(int n)
{
    long long unsigned int t1 = 0, t2 = 1, next = t1 + t2;

    for (int i = 0; i < n; i++)
    {
        if (i < 1)
        {
            cout << i << "   ";
        }
        else
        {
            cout << next << "   ";
            t1 = t2;
            t2 = next;
            next = t1 + t2;
        }
    }
}

int main()
{
    int n = 0;
    cout << "enter n greater than 0 :";

again_n:
    cin >> n;
    if (n < 0)
    {
        cout << "enter greater than 0";
        goto again_n;
    }

    cout << "\n\n FIBONACCI SERIES:\n\n";

    fib(n);
}