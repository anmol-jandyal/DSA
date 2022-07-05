// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Program for zig-zag conversion of array
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void zigZag(int arr[], int n)
    {
        // code here
        for (int i = 1; i < n - 1; i += 2)
        {
            if (arr[i] < arr[i - 1])
                swap(arr[i], arr[i - 1]);

            if (arr[i] < arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
    }
};

// { Driver Code Starts.

int main()
{
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends