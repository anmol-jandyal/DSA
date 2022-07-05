// arr[]: 6  7 8 10 11 12 15 16 17 18  19
// index: 0  1 2 3  4   5  6  7  8  9  10
// diff:  6  6 6 7  7   7  9  9  9  9  9
// mis  :       9        13  14
// the array is sorted

#include <iostream>
using namespace std;

void mis(int *arr, int n)
{
    int diff = arr[0], x = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            x = diff;
            while (x < arr[i] - i)
            {
                cout << x + i << "  ";
                x++;
            }
            diff = x;
        }
    }
}
int main()
{
    int arr[]{6, 7, 8, 10, 11, 12, 15, 16, 17, 18, 19};
    mis(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}
