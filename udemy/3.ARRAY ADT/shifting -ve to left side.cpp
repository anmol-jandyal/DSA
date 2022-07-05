#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}
void shiftnegativeleft(int *arr, int n)
{
    int i = 0, j = n - 1; // two pointer approach
    while (i < j)
    {
        if (arr[i] < 0) // negative move i forward
            i++;
        else
        {
            // positive so first give positive element to index j and decrement j
            swap(arr[i], arr[j--]);
        }
    }
}

int main()
{
    int arr[12] = {1, -1, 2, 3, -4, 1, -2, -5, 3, 4, 6, 2};

    shiftnegativeleft(arr, 12); // 11 is actual no. of elements

    print(arr, 12);
}