#include "header for functions.h"

void display(struct ARRAY *ptr) //ptr pointing to variable of sturct array type
{
    cout << "\n\n THE ARRAY IS :\n\n";
    for (int i = 0; i < ptr->length; i++)
    {
        cout << ptr->A[i] << "  ";
    }
    cout << "\n\n";
}
