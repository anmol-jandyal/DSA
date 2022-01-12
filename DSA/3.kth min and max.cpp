//using sorting then finding particular max and min
#include <iostream>
using std::cin; //full namespace std not included but only cin and cout identifier is added
using std::cout;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void read(int *ptr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "enter element  arr[" << i << "]: ";
        cin >> ptr[i]; //ptr[i]== *(ptr + i)
    }
}
void display(int *ptr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << ptr[i] << "\t";
    }
}

void sort(int *ptr, int n)
{
    int i, itemp = n - 1;
    int jtemp;
    for (i = 0; i < itemp; i++)
    {
        jtemp = n - 1 - i;
        for (int j = 0; j < jtemp; j++)
        {
            if (ptr[j] > ptr[j + 1])
                swap(ptr[j], ptr[j + 1]);
        }
    }
}
int main()
{
    int n = 0;

    cout << "ENTER NO. OF ELEMENTS:";
    cin >> n;

    int *arr = new int[n]; //new is an operator allocate memory in free store and return ptr
    read(arr, n);

    cout << "\n\ngiven array is:\n";
    display(arr, n);

    sort(arr, n);

    cout << "\n\n after sorting : \n";
    display(arr, n);
    int ks = 0, kl = 0;

    cout << "\n\nenter which smallest required";
    cin >> ks;

    cout << "\n\nenter which largest required";
    cin >> kl;

    if (kl > n || ks > n) //if n= 9; there are 9 elements and if we are trying to find 11th largest it is not possible
    {
        return 1;
    }

    //sorting is in ascending order
    // if ks is 2 i.e we need 2nd largest element then it is at arr[2] place
    cout << "\n\n"
         << ks << " smallest element is : " << arr[ks - 1];
    //if kl is 3 i.e we need 3rd largest element and n = 9 then
    // it is at arr[6]  (n-1)-ks=9-3=6
    cout << "\n"
         << kl << "  largest element is : " << arr[n - kl];
    return 0;
}
