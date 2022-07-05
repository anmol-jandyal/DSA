#include <iostream>
using namespace std;
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

class permutation
{
    int h;

public:
    permutation(string st)
    {
        h = st.size() - 1; // index of last char
        cout << h;
    }
    void find(string st, int l = 0)
    {
        if (l == h)
        {
            cout << st << '\n';
            return;
        }
        for (int i = l; i <= h; i++)
        {
            swap(st[l], st[i]);
            find(st, l + 1);
        }
    }
};
int main()
{
    string st = "abcv";

    permutation obj(st);
    obj.find(st);
    return 0;
}