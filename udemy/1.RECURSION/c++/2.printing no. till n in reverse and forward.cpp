
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void fun(int n)
{
    if (n > 0)
    { //head recursion
        fun(n - 1);
        cout << n << "\t"; //decending statement
    }
}
void fun2(int n)
{
    if (n > 0)
    {
        cout << n << "\t"; // this is ascending statements
        fun2(n - 1);       //tail recursion
    }
}
int main()
{
    int n;
    cout << "enter n";
    cin >> n;

    if (n > 0)
    {
        fun(n);
        cout << endl;
        fun2(n); //prints
    }
    return 0;
}