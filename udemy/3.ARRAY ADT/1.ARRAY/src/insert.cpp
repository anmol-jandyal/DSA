#include "header for functions.h"

void insert(struct ARRAY *ptr)
{
    if (ptr->length < ptr->size)
    {
        int index;

        cout << "\nat which index value to be added:";
    again_index:
        cin >> index;
        if (index > (ptr->length - 1)) //if size is 10 and length is 5 then last element is present in 4 index
        {
            cout << "index value is greater than length-1 i.e last place where element is present ";
            goto again_index;
        }

        int element = 0;

        cout << "enter element :";
        cin >> element;

        //shifting elements rightward

        for (int i = ptr->length; i > index; i--)
        {
            ptr->A[i] = ptr->A[i - 1];
        }

        // inserting value
        ptr->A[index] = element;
    }
    else
        cout << "\narray is full!!!\n\n";
}