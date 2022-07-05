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

        int i = 0, j = 0;
        while (i < n)
        {
            if (arr1[i] == arr2[j])
            {
                if (i + 1 < n)
                    swap(arr1[++i], arr2[j]);
                sort(arr2, arr2 + m);
                i++;
            }
            else if (arr1[i] > arr2[j])
            {
                swap(arr1[i], arr2[j]);
                sort(arr2, arr2 + m);
            }
            else
            {
                i++;
            }
        }
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