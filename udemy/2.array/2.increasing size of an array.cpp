#include <iostream>
#include <algorithm>
int main()
{
    int *p = new int[5]{142, 2, 3, 4, 4}; // created in heap

    int n;
    std::cout << "enter new size of array:";
    std::cin >> n;
    int *q = new int[n]{0};

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i]; //assign value of element of array pointed by p to array pointed by q
    }
    delete[] p; //deallocate memory
    p = q;      //value of q to p

    q = NULL;

    for (int i = 0; i < n; i++)
    {
        std::cout << p[i] << "    ";
    }

    return 0;
}