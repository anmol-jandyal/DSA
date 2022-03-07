#include <iostream>
using namespace std;

class forwardN
{
private:
    int *x_ptr, **y_ptr = NULL, n;

public:
    forwardN(int n_main)
    {
        n = n_main;
        x_ptr = new int[n];   // create a array to store values of x.
        y_ptr = new int *[n]; // create a array of pointer pointing to an arrays that used to store values of y, del(y),del^2(y) so on .

        // creating array to store forward difference of different order
        // address of each array is stored in array pointed by y_ptr

        for (int i = 0; i < n; i++)
        {
            y_ptr[i] = new int[n - i];
        }
    }
    void input();
    void calculate();
    void display();
};

void forwardN::input()
{
    cout << "enter the values of x and corresponding y:";

    for (int i = 0; i < n; i++)
    {
        cout << "\n X[" << i << "]: ";
        cin >> x_ptr[i]; // * (x_ptr + i)

        cout << "\n Y[" << i << "] :";
        cin >> y_ptr[0][i]; // it will put data in first array pointed by first element of pointer array pointed by y_ptr
    }
}
void forwardN::calculate()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            y_ptr[i][j] = y_ptr[i - 1][j + 1] - y_ptr[i - 1][j];
        }
    }
}
void forwardN::display()
{
    calculate();

    cout << "NEWTONS FORWARD TABLE IS GIVEN AS:\n\n";
    for (int i = 0; i < n; i++)
    {
        cout << "y(o=" << i << ")  ";
    }
    cout << "\n---------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << y_ptr[j][i] << "     ";
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cout << "enter the no. of data to be entered:";

again_n:
    cin >> n;
    if (n < 0)
    {
        goto again_n;
    }

    forwardN obj(n); // parameterised constructor

    obj.input();
    obj.display();

    return 0;
}