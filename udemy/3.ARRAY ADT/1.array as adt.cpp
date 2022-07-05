// ADT : abstract data type  i.e type which represent necessary properties
// like in array ADT: ther is data representation and fn performing on that array
/* DATA REPRESENTATION
* ARRAY SPACE
* SIZE  - actual no. of element that can be store in an array
* length - no. of element stored in an array

eg: let int arr[50]
* here size is 50.
* and length is 0 as no. element is stored till now.
*/

/* functions performed on arrays
    1.insert(ele,index)
    2.display()
    3.add(ele)/ append(ele)
    4.delete(index)
    5.search(key)
    6.get(index)
    7.set(index,x)
    8.max(),min()
    9.reverse()
   10. shift() and rotate()
*/

#include <iostream>
using std::cin;
using std::cout;

// creating an array class containing necessary functions and its members representing its data

class array
{
    int *ptr;   // ptr points to a array created in heap /free space
    int length; // is the no. of element present
    int size;   // total no. of elements that can be added

public:
    array(int n)
    {
        size = n;
        ptr = new int[size]; // creating array in heap
        length = 0;          // as no element present initially
    }

    // to insert values - input()
    void input();

    // for display() we make display()
    void display();

    // inserting element at end of the other elements
    void append();

    // insert at particular index
    void insert();
};

void array::insert()
{
    // check whether the length == size
    if (length == size)
    {
        cout << "\n\n array is full";
    }
    else
    {
        int index = 0;
        cout << "\n\n at which index to be added:";

        again_index;
        cin >> index;
        if (index < 0 || index >= length) // we are not going to insert at the index whose value is length
        {
            cout << "\nenter again index: as given index is wrong\n";
            goto again_index;
        }

        for (int i = length; i > index; i--)
        {
            ptr[i] = ptr[i - 1];
        }

        // enter the element to be entered at give index
        cout << "\nenter element to be placed at given index";
        cin >> ptr[index];
    }
}

void array::append()
{
    if (length == size)
    {
        cout << "\nthe array is full to enter element please delete some element\n";
    }
    else
    {
        cout << "enter element:";
        cin >> ptr[length];
        // as one more element is added so the length also increase by one
        length++;
    }
}

void array::display()
{
    cout << "\n\nTHE ARRAY ELEMENTS ARE\n";

    // here as we entered the elements and the length is containing no. of elements
    for (int i = 0; i < length; i++)
    {
        cout << ptr[i] << "   ";
    }
}

void array::input()
{
    cout << "how many element you want to enter:";

again_length:
    cin >> length; // here length get some value which should be greater then 0 and less than size

    if (length < 0 || length > size)
    {
        cout << "either length is less than 0 or greater than size. so enter carefully again\n";
        goto again_length;
    }

    // putting elements in an array
    cout << "\n\nNOW ENTER ELEMENTS :\n\n";
    for (int i = 0; i < length; i++)
    {
        cout << "element no." << i << ":";
        cin >> ptr[i]; // ptr is used to access the elements spaces
    }
}

int main()
{
    int n = 0;
    cout << "enter size of array you want to create:";
again_n:
    cin >> n;
    if (n < 0)
    {
        cout << "size cannot be less than 0 so please enter again\n";
        goto again_n;
    }
    // creating array

    array a(n); // parameterized constructer is called   also 'a' is an obj of type "array"

    a.input();

    a.display();

    char check = '\0'; // for controling which function to be performed

    do
    {
        cout << "\n\n a> display.";
        cout << "\n b> add at end.";
        cout << "\n c> insert at particular place.";
        cout << "\n E> for exit";

        cin >> check;

        switch (check)
        {
        case 'a':
            a.display();
            break;

        case 'b':
            a.append();
            break;

        case 'c':
            a.
        }
    }
    return 0;
}
