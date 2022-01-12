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

int sortasc(int *ptr, int n, int kl)
{
    int i;
    int jtemp;
    for (i = 0; i < kl; i++) //sorting is done only for kl element
    {
        jtemp = n - 1 - i;
        for (int j = 0; j < jtemp; j++)
        {
            if (ptr[j] > ptr[j + 1])
                swap(ptr[j], ptr[j + 1]);
        }
    }
    return ptr[n - kl]; //if n = 9, kl = 5 , so 5th largest is at place n-kl=4
}
int sortdec(int *ptr, int n, int ks)
{
    int i;
    int jtemp;
    for (i = 0; i < ks; i++) //sorting is done for only ks element
    {
        jtemp = n - 1 - i;
        for (int j = 0; j < jtemp; j++)
        {
            if (ptr[j] < ptr[j + 1])
                swap(ptr[j], ptr[j + 1]);
        }
    }
    return ptr[n - ks]; //n=9 , ks =3 so 3rd smallest is at n-ks = 6 index
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

    int ks = 0, kl = 0;

    cout << "\n\nenter which smallest required";
    cin >> ks;

    cout << "\n\nenter which largest required";
    cin >> kl;

    if (kl > n || ks > n) //if n= 9; there are 9 elements and if we are trying to find 11th largest it is not possible
    {
        return 1;
    }

    //sortdec() - sort the array in decending order but not fully but till ks
    //i.e if ks = 3 the sorting is done and only 3 smallest not reaches last place
    cout << "\n\n"
         << ks << " smallest element is : " << sortdec(arr, n, ks);

    cout << "\n"
         << kl << "  largest element is : " << sortasc(arr, n, kl);

    return 0;
}
