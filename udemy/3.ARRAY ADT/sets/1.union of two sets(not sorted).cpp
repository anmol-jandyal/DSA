// no duplicate elements are present in the sets
// in this approach we first copy all elements of one set in unionarr and the we take each elements for other set and keep checking whether
// any element is already present in unionarr or not if not we place that element.

// we can also use vector for storage efficiency
#include <iostream>
using namespace std;

void unionsets(int *a1, int *a2, int n, int m)
{
    int unionarr[n + m];

    // copying elements of a1 in unionarr
    for (int i = 0; i < n; i++)
    {
        unionarr[i] = a1[i];
    }
    int j = 0;
    // now taking each element of set 2 i.e a2 and check whether that element already present or not
    for (int i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a2[i] == unionarr[j])
                break;
        }
        if (j == n)
        {
            unionarr[j] = a2[i];
            n++;
        }
    }
    for (j = 0; j < n; j++)
    {
        cout << unionarr[j] << " ";
    }
}
int main()
{
    int a1[] = {1, 5, 7, 8, 6, 4, 5}, a2[] = {11, 22, 44, 7, 88, 1, 6, 3};

    unionsets(a1, a2, sizeof(a1) / sizeof(a1[0]), sizeof(a2) / sizeof(a2[0]));
}
