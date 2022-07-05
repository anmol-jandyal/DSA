// in this we first find the max element and create array of that element + 1 size of counting the
// occurance each elements.
// note : considering +ve elements only

#include <iostream>
using namespace std;

int maximum(int *arr, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
void duplicates(int *arr, int n)
{
    int max = maximum(arr, n);

    // creating hash table of max+1 size i.e we also considering 0 may be present in the array
    int hash[max + 1] = {0};

    // traversing thru the whole array and seeing the occurance of elements and storing them in particular index
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    // now traversing thru the hash and printing out occurance of particular elements
    for (int i = 0; i <= max; i++)
    {
        if (hash[i] > 0)
        {
            cout << i << " occur " << hash[i] << " times\n";
        }
    }
}
int main()
{
    int arr[] = {1, 2, 4, 5, 3, 2, 6, 4, 2, 4, 54, 23, 4345, 767};
    duplicates(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}

// the only drawback of this approach is that the space complexity
