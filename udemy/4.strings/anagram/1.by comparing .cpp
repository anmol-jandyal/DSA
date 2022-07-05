// anagram : to strings formed form same set of characters
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

int anagram(char *s1, char *s2)
{
    int n1 = size(s1), n2 = size(s2);

    // changing spaces to '\0'
    for (int i = 0; i < n2; i++)
    {
        if (s2[i] == ' ')
        {
            s2[i] = '\0';
        }
    }
    int j;
    for (int i = 0; i < n1; i++)
    {
        if (s1[i] == ' ')
            continue;

        for (j = 0; j < n2; j++)
        {
            if (s1[i] == s2[j])
            {
                s2[j] = '\0';
                break;
            }
        }
        if (j == n2)
            return 0;
    }

    for (int i = 0; i < n2; i++)
    {
        if (s2[i] != '\0')
            return 0;
    }
    return 1;
}
int main()
{
    char st1[] = "decimal";
    char st2[] = "anmol";

    if (anagram(st1, st2))
        cout << "is anagram";
    else
        cout << "not anagram";
    return 0;
}