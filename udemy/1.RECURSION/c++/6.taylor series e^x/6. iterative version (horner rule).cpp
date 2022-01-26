
/*  e^x = 1 + x{1 + x/2 [1 + x/3 (1 + x/4 ...........) ]}*/
//horner rule

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

long double ex(int x, int n)
{
    if (x == 0)
        return 1;

    long double res = 1.0;

    for (; n > 1; n--)
        res = res * (x / (n - 1.0)) + 1; //use of n - 1.0 because it make it to float

    return res;
}

int main()
{
    int x = 0, n = 0;

    cout << "e^x = 1 + pow(x,1)/1 + pow(x,2)/2! + pow(x,3)/3! +   ............. n terms\n";
    cout << "note for more precision enter n greater than 10\nenter x:";
    cin >> x;
    cout << "\nenter no. of terms wanted:";
    cin >> n;

    if (n < 0) //no. of terms cannot  be negative
        return 1;

    cout << std::fixed;
    cout << "\n\n e^" << x << " = " << std::setprecision(15) << ex(x, n);

    return 0;
}