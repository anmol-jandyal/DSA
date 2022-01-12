
#include <iostream>
using std::cin;
using std::cout;

void fun(int n)
{
    if (n > 0) //base
    {
        cout << n << " "; //executed before next call (ascending)
        fun(n - 1);       //recursive call
    }
}

void fun2(int n)
{
    if (n > 0) //base
    {
        fun2(n - 1);      //recursive call
        cout << n << " "; //executed after above call done completely (decending)
    }
}
int main()
{
    int x;
    cout << "enter x";
    cin >> x;
    fun(x);
    cout << "\n";
    fun2(x);
    system("pause");
    return 0;
}
