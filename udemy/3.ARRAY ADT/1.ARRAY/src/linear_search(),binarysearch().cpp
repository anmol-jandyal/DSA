#include "header for functions.h"

void linear_search(struct ARRAY *ptr)
{
    int i = 0;
    int x = 0; //if not found we check its value
    int key = 0;

    cout << "\nENTER ELEMENT TO FIND IN ARRAY\n";
    cin >> key;
    for (i = 0; i < ptr->length; i++)
    {
        if (key == ptr->A[i])
        {
            cout << " found at index:" << i << "\n";
            x++;
        }
    }
    if (x == 0)
    {
        cout << "\nnot found!!\n\n";
    }
}

void binary_search(struct ARRAY *ptr)
{
    int key = 0;
    int start = 0, end = ptr->length - 1;
    int middle = 0;

    cout << "enter element to search in sorted array:";
    cin >> key;
    char flag = '\0';

    while (start <= end)
    {
        middle = (end + start) / 2;
        if (key == (ptr->A[middle]))
        {
            cout << "found at :" << middle << "\n\n";
            flag = 'f';
            break;
        }
        else if (key < (ptr->A[middle]))
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }

    if (flag == '\0')
        cout << "not found\n\n";
}