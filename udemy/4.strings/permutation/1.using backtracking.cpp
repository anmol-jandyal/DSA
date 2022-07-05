// note we cannot create static array of variable length

#include <iostream>
using namespace std;

int size(char *st)
{
    int i = 0;
    while (st[i++] != '\0')
    {
    }
    return i - 1;
}
class permutation
{
    int *check, n;
    char *res;

public:
    permutation(char *st)
    {
        n = size(st);
        check = new int[n + 1]{0};
        res = new char[n + 1];
    }

    void print(char *st, int k = 0)
    {
        if (k == n)
        {
            res[n] = '\0';
            cout << res << "\n";
            return;
        }

        int x;
        for (x = 0; x < n; x++)
        {
            if (check[x] == 0)
            {
                res[k] = st[x];
                check[x]++;
                print(st, k + 1);
                check[x] = 0;
            }
        }
        return;
    }
};
int main()
{
    char st[] = "ABCD";

    permutation obj(st);
    obj.print(st);
    string s;
    cout << s.size();
    return 0;
}