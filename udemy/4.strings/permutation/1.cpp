#include <iostream>
#include <vector>
using namespace std;

class s
{
    vector<int> v;

public:
    s(int n)
    {
        v.insert(n - 1, 5);
        // for (int i = 0; i < n; i++)
        // {
        //     v.push_back(0);
        // }
        for (int i = 0; i < n; i++)
        {
            cout << v[i];
        }
    }
};

int main()
{
    s o(5);
}