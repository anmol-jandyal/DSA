/* series = 0 1 1 2 3 5 8 13 ..........*/

#include "F:\ANMOL\studies\c coding\c++\udemy\1.RECURSION\c++\header.h"
#include <algorithm>

int n = 0; //global
int main()
{
    int *arr = new int[10];
    int n = 10;
    cout << ::n;
    cout << "\n\n"
         << n;
    std::fill_n(arr, 7, 99);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}