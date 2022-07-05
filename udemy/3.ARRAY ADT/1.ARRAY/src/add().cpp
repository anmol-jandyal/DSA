#include "header for functions.h"

void add(struct ARRAY *ptr)
{
    if (ptr->length < ptr->size)
    {
        cout << "\nenter element:";
        cin >> ptr->A[ptr->length];
        (ptr->length)++;
    }
    else
        cout << "array is full\n\n";
}

//IF PTR is pointing to any struct variable the to access its member we can use
// (*ptr).member   or   ptr->member
//in above  ptr points to STRUCT ARRAY object
//ptr->length == (*ptr).length
//ptr->A[ptr->length]   ==  (*ptr).A[(*ptr).length]