// 2 3 4 5 6 starts with 2 it can be 1 or any other element
// find sum of first natural no. using n(n+1)/2 and calculate sum of give array and subtract both
// as sorted last element is upper bound and first element is lower bound
// here 2 is lower bound and 6 is upper bound

#include <iostream>
using namespace std;
int mis(int *arr, int n)
{
    int sum = 0;
    int x = arr[0] - 1, y = arr[n - 1];                 // x is the lower bound of natural no. - 1
    int actual = (y * (y + 1) / 2) - (x * (x + 1) / 2); // actual sum of no. from x to y where x is lower bound -1 and y is upper bound
                                                        // actual= sum of y natural no. - sum of (x) natural no.s
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return actual - sum;
}
int main()
{
    int arr[] = {3, 4, 5, 6, 7, 8, 9, 11}; // note sorted n natural no.s
    cout << "element: " << mis(arr, (sizeof(arr) / sizeof(arr[0]))) << "missing";
    return 0;
}