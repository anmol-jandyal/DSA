#include <iostream>

int main()
{
    int arr[3][4]; //simple way
    std::cout << "using simple 2 d array\n\n";
    std::cout << "arr = " << arr;
    std::cout << "\n*arr = " << *arr;
    std::cout << "\narr + 1 = " << arr + 1;
    std::cout << "\n*(arr) + 1 = " << *(arr) + 1; // &arr[0][1]
    std::cout << "\n & arr[0][1] = " << &arr[0][1];
    std::cout << "\n\naccessing array arr[1][2]  = " << arr[1][2];

    //using pointers and partialheap allocation

    int *p[3]; // p is array of int *

    for (int i = 0; i < 3; i++)
    {
        p[i] = new int[4]{0};
    }

    std::cout << "\n\n p " << p;

    //using pointer and fully in heap

    int **q;

    q = new int *[3]; //array of integer pointer

    std::cout << "\n\n q = " << q;
    std::cout << "\n*q = " << *q;
    std::cout << "\n\n q +1 = " << q + 1;

    for (int i = 0; i < 3; i++)
    {
        q[i] = new int[4]{0};
    }

    return 0;
}