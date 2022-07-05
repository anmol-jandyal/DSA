/*
    we try to store the occurance of each letters of both string
    then we traverse through the hash array and if the strings are anagram then the elements in hash will be of 2x
*/
/*
    a: 0 :97
    b: 1: 98
    z:25:120
*/
// anagram if no. of letters will be equal but if not ==> not anagram

#include <iostream>
using std::cout;

int no_letter(char *st)
{
    int i = 0, x = 0;
    while (st[i] != '\0')
    {
        if (st[i] != 32)
            x++;
        i++;
    }
    return x;
}
int anagram(char *s1, char *s2)
{
    if (no_letter(s2) == no_letter(s1))
    {
        int hash[26]{0};

        for (int i = 0; s1[i] != '\0'; i++)
        {
            if (s1[i] != 32)
                hash[s1[i] - 97]++;
        }
        for (int i = 0; s2[i] != '\0'; i++)
        {
            if (s2[i] != 32)
                hash[s2[i] - 97]++;
        }

        for (int i = 0; i < 26; i++)
        {
            if ((hash[i] & 1) > 0) // not multiple of 2 (odd)
                return 0;
        }
        return 1;
    }

    // as no. of letters of both string is not same so not anagram
    return 0;
}

int main()
{
    char s1[] = "decimal", s2[] = "medical";

    if (anagram(s1, s2))
        cout << "yess  anagram";
    else
        cout << "not anagram";
    return 0;
}

/*
complexity:
time: o(n)
space : o(1)
*/