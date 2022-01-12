#include <iostream>
using std::cin; //full namespace std not included but only cin and cout identifier is added
using std::cout;

void read(int *ptr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "enter element  arr[" << i << "]: ";
        cin >> ptr[i]; //ptr[i]== *(ptr + i)
    }
}
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void reverse(int *ptr, int n)
{
    int i, half = n / 2;
    for (i = 0; i < half; i++)
    {
        swap(ptr[i], ptr[n - 1 - i]);
    }
}
void display(int *ptr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "element arr[" << i << "] : " << ptr[i] << "\n";
    }
}

int main()
{
    int n = 0;

    cout << "ENTER NO. OF ELEMENTS:";
    cin >> n;

    int *arr = new int[n]; //new is an operator allocate memory in free store and return ptr
    read(arr, n);

    cout << "before reverse:\n";
    display(arr, n);

    reverse(arr, n);

    cout << "after reverse:\n";
    display(arr, n);
    return 0;
}