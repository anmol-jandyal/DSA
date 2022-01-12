#include <iostream>
using std::cin;
using std::cout;

/*long long int power(int n, int m)
{
    if (m == 1)
        return n;
    else if (m == 0)
        return 1;
    else
        return n * power(n, m - 1);
}*/
long long int power(int n, int m)
{
    if (m == 0)
        return 1;
    else if (m % 2 == 0)
        return power(n * n, m / 2);
    else
        return n * power(n * n, (m - 1) / 2);
}
int main()
{
    int n, m;
    cout << "enter n";
    cin >> n;
    cout << "enter power";
    cin >> m;

    cout << "\n"
         << n << " power " << m << " = " << power(n, m);

    return 0;
}