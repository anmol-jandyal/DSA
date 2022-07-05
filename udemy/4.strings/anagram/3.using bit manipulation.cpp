// using xor ^ we can use its property i.e a^a=0

#include <iostream>
using namespace std;

int anagram(string s1, string s2)
{
    int ans = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] != ' ')
            ans ^= s1[i];
    }

    for (int i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] != ' ')
            ans ^= s2[i];
    }
    if (ans == 0)
        return 1;
    return 0;
}

int main()
{
    string s1 = "hell o wor", s2 = "world hello";
    if (anagram(s1, s2))
    {
        cout << "yess";
    }
    else
        cout << "noooo";
    return 0;
}