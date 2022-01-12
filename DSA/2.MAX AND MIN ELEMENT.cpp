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
void display(int *ptr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "element arr[" << i << "] : " << ptr[i] << "\n";
    }
}
void findmaxmin(int *ptr, int n, int &max, int &min) //call by reference
{
    int i;
    if (n == 1) //if only one element in array then min = max
    {
        max = ptr[0];
        min = ptr[0];
    }
    else if (n > 1) //if n>1 element then we check first element and second element
                    // if 1st is greater we assign max with it or visa versa
    {
        if (ptr[0] >= ptr[1])
        {
            max = ptr[0];
            min = ptr[1];
        }
        else
        {
            max = ptr[1];
            min = ptr[0];
        }
    }

    //we compare form 3rd element as first to are already compared
    for (i = 2; i < n; i++) //f(n)= 1 + n-1 + n-2  == 2n-2   = O(n)
    {
        if (max < ptr[i])
            max = ptr[i];
        if (min > ptr[i])
            min = ptr[i];
    }
}
int main()
{
    int n = 0;

    cout << "ENTER NO. OF ELEMENTS:";
    cin >> n;

    int *arr = new int[n]; //new is an operator allocate memory in free store and return ptr
    read(arr, n);

    int max, min;

    cout << "\n\ngiven array is:\n";
    display(arr, n);

    findmaxmin(arr, n, max, min); //call by reference

    cout << "\n\nmax = " << max << "\nmin = " << min;

    return 0;
}