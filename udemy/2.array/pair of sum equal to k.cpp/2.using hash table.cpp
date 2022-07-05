// using hash table we create table
// now we traverse through the given array
// and we mark their occurance
// then if a no. is k and we do difference it with picked no. and see whether the difference of the element is present or not

#include <iostream>
using namespace std;

int max(int *arr, int n)
{
    int m = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (m < arr[i])
            m = arr[i];
    }
    return m;
}

void pairs(int *arr, int n, int k)
{
    int count = 0;
    int diff = 0, m = max(arr, n);
    int hash[m + 1];
    // initializing hash[]elements by 0
    for (int i = 0; i <= m; i++)
    {
        hash[i] = 0;
    }

    // for each elemet we find differences and see whether it is present or not
    for (int i = 0; i < n; i++)
    {
        diff = k - arr[i];
        if (diff < 0 || diff > m)
        { // as the array only containing +ve elements
            continue;
        }

        else
        {
            if (hash[diff] > 0)
            {
                cout << diff << " + " << arr[i] << " = " << k << " \n";
                count += hash[diff];
            }
            hash[arr[i]]++;
        }
    }
    cout << "total no. of pairs: " << count;
}
int main()
{
    int arr[] = {6, 3, 8, 10, 16, 7, 4, 5, 9, 14};
    int k = 10;
    pairs(arr, sizeof(arr) / sizeof(arr[0]), k);
    return 0;
}