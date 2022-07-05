// array is sorted and we are finding duplicates
// 1. using bruteforce method is which we are picking each element and seeing it occurance forward
// 2. as array is sorted so elements of same values will be together
// so we can use two pointer approach here where first pointing to first occurance and other to last occurance

#include <iostream>
using namespace std;

void duplicate(int *arr, int n)
{
    if (n <= 1)
    {
        cout << arr[0] << " occur: 1 times";
        return;
    }
    int i = 0, j = 1;
    while (j < n)
    {
        if (arr[i] == arr[j])
        {
            j++;
            continue;
        }
        cout << arr[i] << " comes :" << j - i << " times\n";
        i = j;
        j++;
    }
    // for last element we provide extra statement
    cout << arr[i] << " comes :" << j - i << "time\n";
}
int main()
{
    int arr[] = {1, 2};
    duplicate(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}