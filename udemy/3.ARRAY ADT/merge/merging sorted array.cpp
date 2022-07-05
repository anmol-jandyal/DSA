/*
    *copy : we have two arrays and copying elements of one array in other
    *compare: comparing each elements of same size arrays
    *concatenate: joining two arrays of same or diff. size in one array(it is separate array of size of a1+a2)
        also there is no sequence there
    *append: adding element to one array
    *merge : merges two sorted array in single array also element is placed in sorted manner
*/

#include <iostream>
using namespace std;

#define sizea 10 // actual no. of elements
#define sizeb 10 // actual no. of elements

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}

int *merge(int *a, int *b) // returns integer pointer pointing to an array element
{
    int *c = new int[sizea + sizeb];
    int i, j, k;

    i = j = k = 0; // i - a, j - b, k - c

    while (j < sizeb && i < sizea)
    {
        if (a[i] == b[j])
        {
            c[k++] = a[i++];
            c[k++] = b[j++];
        }
        else if (a[i] > b[j])
        {
            c[k++] = b[j++];
        }
        else
        {
            c[k++] = a[i++];
        }
    }

    // checking if there is any left over element or not
    if (k < sizea + sizeb)
    {
        if (j < sizeb) // it means all element of b is not placed in c
        {
            while (j < sizeb)
            {
                c[k++] = b[j++];
            }
        }
        else
        {
            while (i < sizea)
            {
                c[k++] = b[i++];
            }
        }
    }
    return c;
}

int main()
{
    int a[sizea] = {7, 9, 9, 10, 11, 11, 13, 14, 17, 19};
    int b[sizeb] = {1, 1, 4, 5, 8, 11, 13, 16, 19, 19};

    int *arr = merge(a, b); // arr is pointed to an array which is created in heap

    print(arr, sizea + sizeb);
}