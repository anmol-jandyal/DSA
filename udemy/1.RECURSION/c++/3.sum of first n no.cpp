
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/* unsigned int sum(int n)
{
    static unsigned int s = 0;

    if (n >= 1)
    {
        s += n;

        sum(n - 1);
    }
    return s;
} */

/* use of formula (n(n-1)/2)      time complexity O(1)*/

unsigned int sum(int n) //time complexity O(n)
                        //size complexity O(n)
{
    if (n == 1)
        return 1;
    else
        return (n + sum(n - 1));
}

int main()
{
    int n;
    cout << "enter n";
    cin >> n;

    if (n > 0)
    {
        cout << "sum = " << sum(n);
    }

    return 0;
}