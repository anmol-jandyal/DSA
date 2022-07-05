/*
 let a: 0 : 97
    b: 1: 98
    :::::::
    z: 25 : 120

    A: 26 : 65 : A-65+26
    B: 27: 67:
    ::::::::
    Z: 51: 90
*/
// considering string only contain lower and upper case characters(letters) and spaces also
#include <iostream>
using namespace std;

void duplicate(char *st)
{
    int hash[52] = {0};

    // traversing through whole st and storing the no. of occurrance in particular element of hash
    int i = 0;
    while (st[i] != '\0')
    {
        if (st[i] >= 65 && st[i] <= 90) // upper case
        {
            hash[26 + st[i] - 65]++;
        }
        else if (st[i] >= 97 && st[i] <= 120)
        {
            hash[st[i] - 97]++;
        }
        i++;
    }

    // hash contain no. of occurance of characters
    for (int i = 0; i < 52; i++)
    {
        if (hash[i] > 1)
        {
            if (i <= 25) // for lower case element
                cout << (char)(i + 97) << " occur " << hash[i] << " times \n";
            else
            {
                cout << (char)(65 + i - 26) << " occur " << hash[i] << " times \n";
            }
        }
    }
}
int main()
{
    char st[] = "hello its ANMOL ANMOL";

    duplicate(st);
    return 0;
}