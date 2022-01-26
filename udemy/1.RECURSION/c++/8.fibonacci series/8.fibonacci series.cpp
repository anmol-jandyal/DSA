/* series = 0 1 1 2 3 5 8 13 ..........*/

#include "F:\ANMOL\studies\c coding\c++\udemy\1.RECURSION\c++\header.h"

long long unsigned int fib(int n)
{
    if (n <= 1)
        return n; //if n=0 it return 0 and when 1 it return 1
    return fib(n - 1) + fib(n - 2);
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

    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << "  ";
    }
}