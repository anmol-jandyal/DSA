#include <vector>
#include <iostream>
using namespace std;

class factorial
{
    int n;
    vector<int> res;

public:
    factorial()
    {
        n = 0;
    }

    void input()
    {
        cout << "enter the no. whose factorial is needed";
    again_n:
        cin >> n;
        if (n < 0)
        {
            cout << "n cannot be negative";
            goto again_n;
        }
    }

    void add(int value);

    void display()
    {
        if (n == 0)
        {
            cout << " factorial = " << 1;
        }
        else
        {
            res.push_back(1); // add 1 to beginning index 0
            int x = 0;

            cout << "\n1, " << res[0];
            int carry = 0;
            long long unsigned int i = 0;

            for (i = 1; i <= (long long unsigned int)n; i++)
            {
                // after every loop carry is 0
                for (int j = x; j >= 0; j--)
                {
                    carry = res[j] * i + carry;

                    // taking last digit of carry and storing it in vector res. sequentially
                    res[j] = carry % 10; // last digit
                    carry /= 10;         // reducing one digit from carry

                    while (carry && j == 0)
                    {
                        add(carry % 10); // this will add new element at 0 place
                        // now after adding element the oneth place shifted in vector res so we increment x by one

                        x++;
                        carry /= 10;
                    }
                }
            }
            long long unsigned int size_res = res.size();
            cout << "\nthe factorial is\n";
            for (i = 0; i < size_res; i++)
            {
                cout << res[i];
            }
        }
    }
};
void factorial::add(int value)
{
    int x = res.size() - 1;
    res.push_back(res[x]);
    while (x >= 0)
    {
        res[x + 1] = res[x];
        x--;
    }
    res[0] = value;
}

int main()
{
    factorial obj;
    obj.input();
    obj.display();
}