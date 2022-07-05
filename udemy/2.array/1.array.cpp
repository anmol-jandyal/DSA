#include <iostream>
#include <algorithm>
int main()
{                                         // we donot need = for assignment use bracket {}
    int arr[5]{1, 2, 34, 5, 34};          //created in stack
    int *p = new int[5]{142, 2, 3, 4, 4}; // created in heap

    std::cout << p << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "arr [" << i << " ] = " << arr[i] << "   :    p[" << i << "] = " << p[i] << std::endl;
    }

    //arr[i]  == *(arr + i)   p[i]== *(p +i)

    std::fill_n(p, 5, 0); //this will assign 0 to all element pointed by p

    delete[] p; //deallocate memory
    p = NULL;
    return 0;
}