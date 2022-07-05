// we take each element and check its sum with other elements

#include <iostream>
using namespace std;

void pairs(int *arr, int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << arr[i] << "+" << arr[j] << "= " << k << endl;
            }
        }
    }
    cout << "done";
}
int main()
{
    int arr[] = {6, 3, 8, 16, 7, 5, 2, 14, 10};
    int k = 10;
    pairs(arr, sizeof(arr) / sizeof(arr[0]), k);
    return 0;
}
/* n=7; last index=6
 for i=0, j-1->6  :6
 for i=1, j-2->6  :5
 for i=2, j-3->6  :4
 for i=3, j-4->6  :3
 for i=4, j-5->6  :2
 for i=5, j-6     :1

 6+5+4+3+2+1= n(n+1)/2 ==> n^2

 time complexity:o(n^2)
*/