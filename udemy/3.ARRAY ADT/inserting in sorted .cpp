#include <iostream>
using namespace std;
void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}
void insert(int *arr, int ele, int n)
{ // assuming array is not full
    int i = n - 1;
    while (arr[i] >= ele && i >= 0)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = ele;
}

int main()
{
    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 10, 12, 13, 14};
    int ele = -1;
    insert(arr, ele, 11); // 11 is actual no. of elements

    print(arr, 12);
}