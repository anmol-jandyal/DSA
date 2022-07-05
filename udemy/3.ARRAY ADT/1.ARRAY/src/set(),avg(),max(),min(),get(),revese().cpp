#include "header for functions.h"

void set(struct ARRAY *ptr)
{
    int x = 0, index;
    cout << "enter value to set:";
    cin >> x;

    cout << "where to set value:";
again_index:
    cin >> index;
    if (index > ptr->length - 1)
    {
        cout << "enter value less than length -1 i.e " << ptr->length - 1;
        goto again_index;
    }

    //setting value
    ptr->A[index] = x;

    cout << "\n\n";
}
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void max_min(struct ARRAY *ptr)
{
    int max = ptr->A[0];
    int min = ptr->A[1];

    if (max < min)
    {
        swap(max, min);
    }
    for (int i = 2; i < ptr->length; i++)
    {
        if (max < ptr->A[i])
            max = ptr->A[i];

        if (min > ptr->A[i])
            min = ptr->A[i];
    }
    cout << "max =" << max << "\nmin = " << min << "\n\n";
}

void avg(struct ARRAY *ptr)
{
    int sum = 0;
    for (int i = 0; i < ptr->length; i++)
    {
        sum += ptr->A[i];
    }
    cout << "average = " << (float)sum / ptr->length << "\n\n";
}

void get(struct ARRAY *ptr)
{
    int index = 0;
    cout << "to get value at index:";
again_index:
    cin >> index;
    if (index > ptr->length - 1 && index >= 0)
    {
        cout << "enter value less than length -1 i.e " << ptr->length - 1;
        goto again_index;
    }

    cout << "value at index = " << index << " is" << ptr->A[index];
}

void reverse(struct ARRAY *ptr)
{
    int half = ptr->length / 2;

    for (int i = 0; i <= half; i++)
    {
        swap(ptr->A[i], ptr->A[(ptr->length) - 1 - i]);
    }
    cout << "\narray is reversed \n\n";
}