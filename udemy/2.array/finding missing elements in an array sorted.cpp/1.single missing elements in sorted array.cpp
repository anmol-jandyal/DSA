// first n natural no.s
// find sum of first natural no. using n(n+1)/2 and calculate sum of give array and subtract both

#include <iostream>
using namespace std;
int mis(int *arr, int n)
{
    int sum = 0;
    int actual = ((n + 1) * (n + 2)) / 2; // largest nth natural no. = n+1 eg: if 1 2 3 5  then n= 4 and as only one element is missing then larges no. is n+1 =5
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return actual - sum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11}; // note sorted n natural no.s
    cout << "element: " << mis(arr, (sizeof(arr) / sizeof(arr[0]))) << "missing";
    return 0;
}