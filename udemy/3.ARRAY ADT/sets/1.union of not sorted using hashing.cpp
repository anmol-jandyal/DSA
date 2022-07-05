// we create hash array of greatest value and then store the occurance and in the last we traverse
// through all this hash arrray and print the union elements.

#include <iostream>
using namespace std;

int maximum(int *a1, int *a2, int n, int m)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < a1[i])
            max = a1[i];
    }

    for (int i = 0; i < m; i++)
    {
        if (max < a2[i])
            max = a2[i];
    }
    return max;
}

void unionsets(int *a1, int *a2, int n, int m)
{
    int max = maximum(a1, a2, n, m);
    int hash[max + 1];
    int i;
    for (i = 0; i <= max; i++)
    {
        hash[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        hash[a1[i]]++;
    }
    for (i = 0; i < m; i++)
    {
        hash[a2[i]]++;
    }

    for (i = 0; i <= max; i++)
    {
        if (hash[i] > 0)
            cout << i << " ";
    }
}
int main()
{
    int a1[] = {1, 5, 7, 8, 6, 4, 5}, a2[] = {11, 22, 44, 7, 88, 1, 6, 3};

    unionsets(a1, a2, sizeof(a1) / sizeof(a1[0]), sizeof(a2) / sizeof(a2[0]));
}