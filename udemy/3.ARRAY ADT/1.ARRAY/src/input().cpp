#include "header for functions.h"

void input(struct ARRAY *ptr)
{
    cout << "\n\n enter ARRAY :\n\n";
    for (int i = 0; i < ptr->length; i++)
    {
        cout << "element [" << i << "]:";
        cin >> ptr->A[i];
    }
}
