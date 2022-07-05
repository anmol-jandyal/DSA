// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void merge(int arr1[], int arr2[], int n, int m)
    {
        // code here

        // we take last element of arr1[] and first element of  arr2[]
        // then compare if arr1[] last element is greater than arr2[] first it means array is already sorted
        // else swap these element and increment the value of pointer of arr2[] and decrement that of arr1[]
        // then again check the values is greater of not and so on

        int i = n - 1, j = 0;
        while (i >= 0 && j < m)
        {
            if (arr1[i] < arr2[j])
                break;
            else
            {
                swap(arr1[i], arr2[j]);
                i--;
                j++;
            }
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
    }
};

// { Driver Code Starts.
int main()
{

    int n, m, i;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    Solution ob;
    ob.merge(arr1, arr2, n, m);
    for (i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    for (i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << "\n";
    return 0;
} // } Driver Code Ends