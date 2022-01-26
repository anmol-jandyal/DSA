/* series = 0 1 1 2 3 5 8 13 ..........*/

#include "F:\ANMOL\studies\c coding\c++\udemy\1.RECURSION\c++\header.h"
#include <algorithm> //to use std::fill_n(arr,n,value)

int n = 0; //global

long long int fib(int n)
{
    static long long int *arr = new long long int[::n];
    if (n == 0) //n is local
    {
        std::fill_n(arr, ::n, -1); // for initializing elements of array by -1
        arr[n] = n;
        return n;
    }
    if (n == 1)
    {
        arr[n] = n;
        return n;
    }
    else
    {
        if (arr[n - 1] == -1)
            arr[n - 1] = fib(n - 1);

        if (arr[n - 2] == -1)
            arr[n - 2] = fib(n - 2);

        return arr[n - 1] + arr[n - 2];
    }
}

int main()
{

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
    return 0;
}