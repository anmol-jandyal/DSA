#include <iostream>
using namespace std;

// if both equal return 0
// if not but first string come first in dictionary retrun -ve value
// else return +ve

int compare(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] == s2[i] || s1[i] == s2[i] + 32 || s1[i] + 32 == s2[i])
            i++;
        else
            break;
    }

    // no comparing if last char is came or not
    // note if one string smaller than there is a comparison b/w '\0' and other char

    if (s1[i] == s2[i] || s1[i] == s2[i + 32] || s1[i + 32] == s2[i])
        return 0;
    else if (s1[i] > s2[i])
    {
        return 1;
    }
    return -1;
}

int main()
{
    char s1[] = "Anmol k", s2[] = "anmol K";

    cout << compare(s1, s2);
}