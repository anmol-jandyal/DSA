//assumption is that array contains only 0,1,2

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

int count(int *ptr, int n, int ele)
{
    int times = 0;
    for (int i = 0; i < n; i++)
    {
        if (ele == ptr[i])
        {
            times++;
        }
    }
    return times;
}

int main()
{
    int n = 0;
    int zeros_no = 0, ones_no = 0, twos_no = 0;
    cout << "ENTER NO. OF ELEMENTS:";
    cin >> n;

    int *arr = new int[n]; //new is an operator allocate memory in free store and return ptr
    read(arr, n);

    cout << "\n\ngiven array is:\n";
    display(arr, n);

    zeros_no = count(arr, n, 0);
    ones_no = count(arr, n, 1);
    twos_no = count(arr, n, 2);

    int index = 0, x = 0;
    for (int i = 0; i < 3; i++)
    {
        switch (i)
        //if i  = 0 then x = no.of zeros s
        {
        case 0:
            x = zeros_no;
            break;
        case 1:
            x = ones_no;
            break;
        case 2:
            x = twos_no;
            break;

        default:
            break;
        }

        for (int j = 0; j < x; j++)
        {
            arr[index] = i;
            index++;
        }
    }

    cout << "\nafter sorting: \n";
    display(arr, n);
}