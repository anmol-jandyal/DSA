// using hashing
/*
considering lower case elements
in array hash we index :
0 : 97 = a
1:98=b
::::::
25 : 120=z
*/
#include <iostream>
using namespace std;

void duplicate(char *st)
{
    int hash[26]{0};

    for (int i = 0; st[i] != '\0'; i++)
    {
        hash[st[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > 1)
        {
            cout << (char)(i + 97) << " comes :" << hash[i] << "\n"; // i+97 will represent letters in lower case
        }
    }
}

int main()
{
    char st[]{"anmolanmol"};
    duplicate(st);
    return 0;
}

/*
 complexity :
 time : o(n)
 space: o(1)
*/