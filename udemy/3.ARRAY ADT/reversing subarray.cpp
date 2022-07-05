// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    void swap(long long int &a, long long int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    void reverse(vector<long long> &arr, int start, int end)
    {
        // end and start are the index value of sub array to be reversed

        while (start < end)
        {
            swap(arr[start++], arr[end--]);
        }
    }
    // Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long> &arr, int n, int k)
    {
        // code here
        for (int i = 0; i < n; i += k)
        {
            if (i + k - 1 >= n)
                reverse(arr, i, n - 1);
            else
            {
                reverse(arr, i, k - 1 + i);
            }
        }
    }
};

// { Driver Code Starts.
int main()
{

    int n;
    cin >> n;
    vector<long long> arr;
    int k;
    cin >> k;

    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        arr.push_back(x);
    }
    Solution ob;
    ob.reverseInGroups(arr, n, k);

    for (long long i = 0; i < n; i++)
    {
        cout << arr[i] << " ";

        cout << endl;
    }
}

// } Driver Code Ends