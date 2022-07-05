// using hash table

#include <iostream>
using namespace std;
int maximum(int *arr, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

void mis(int *arr, int n)
{
    int max = maximum(arr, n);
    int hash[max + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i <= max; i++)
    {
        if (hash[i] == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 9, 10, 14};
    mis(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}