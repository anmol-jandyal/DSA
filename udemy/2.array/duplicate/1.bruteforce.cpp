// we compare each elements with all other element after that

#include <iostream>
using namespace std;

void duplicates(int *arr, int n)
{
    int count;
    for (int i = 0; i < n - 1; i++)
    {
        count = 0;
        if (arr[i] == INT_MIN)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = INT_MIN;
            }
        }
        cout << arr[i] << " comes : " << count + 1 << " times \n";
    }
}
int main()
{
    int arr[] = {1, 2, 4, 5, 3, 2, 6, 4};
    duplicates(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}