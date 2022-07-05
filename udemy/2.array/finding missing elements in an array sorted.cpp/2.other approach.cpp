// values:  6 7 8 9 10 11 13 14
//  index:  0 1 2 3  4  5  6  7
//  if we see value - corresponding index till the missing element is reach is min element (lower bound)
// i.e 6-0: 6
//     7-1:6
//     :::::
//     13-6: 7  ==> element previous of 13 is missing or 6+ 6

#include <iostream>
using namespace std;

int mis(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] - i) != arr[0])
            return arr[0] + i;
    }
    return INT_MIN;
}
int main()
{
    int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11}; // note sorted n natural no.s
    cout << "element: " << mis(arr, (sizeof(arr) / sizeof(arr[0]))) << "missing";
    return 0;
}