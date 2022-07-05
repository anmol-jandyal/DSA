#include "header for functions.h"

void del(struct ARRAY *ptr)
{
    int index;
    cout << "\nenter index to delete element:";
again_index:
    cin >> index;
    if (index > (ptr->length - 1))
    {
        cout << "\nno.element at index = " << index << " please enter index less than length -1 i.e{ " << ptr->length - 1 << " }";
        goto again_index;
    }

    cout << "element to be deleted is" << ptr->A[index] << endl;

    //shifting leftward
    for (int i = index; i < ptr->length - 1; i++)
    {
        ptr->A[i] = ptr->A[i + 1];
    }

    ptr->A[ptr->length - 1] = 0;
    ptr->length--; //as one element is deleted so length is decreased
}