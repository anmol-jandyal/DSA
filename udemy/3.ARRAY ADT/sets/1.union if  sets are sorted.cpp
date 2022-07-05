#include <iostream>
using namespace std;

void unionsets(int *a1, int *a2, int n, int m)
{
    int unionarr[n + m];
    int x = 0, i = 0, j = 0;

    if (a1[n - 1] < a2[0])
    {
        for (i = 0; i < n; i++)
        {
            unionarr[x++] = a1[i];
        }

        for (i = 0; i < m; i++)
        {
            unionarr[x++] = a2[i];
        }
        for (i = 0; i < x; i++)
        {
            cout << unionarr[i] << "  ";
        }
        return;
    }

    while (i < n && j < m)
    {
        if (a1[i] == a2[j])
        {
            unionarr[x++] = a1[i++];
            j++;
        }
        else if (a1[i] < a2[j])
        {
            unionarr[x++] = a1[i++];
        }
        else
        {
            unionarr[x++] = a2[j++];
        }
    }
    for (; i < n; i++)
    {
        unionarr[x++] = a1[i];
    }
    for (; j < m; j++)
    {
        unionarr[x++] = a2[j];
    }
    for (i = 0; i < x; i++)
    {
        cout << unionarr[i] << "  ";
    }
}
int main()
{
    int a1[] = {1, 3, 4, 5, 9}, a2[] = {1, 2, 3, 6, 7, 8, 11, 12, 13, 14, 15, 16};

    unionsets(a1, a2, sizeof(a1) / sizeof(a1[0]), sizeof(a2) / sizeof(a2[0]));
}