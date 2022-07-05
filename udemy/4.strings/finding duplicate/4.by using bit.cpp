// using bit operation we cannot find the occurance but only can find if char repeats or not

#include <iostream>
using namespace std;

void is_duplicate(char *st)
{
    // taking a interger of 32 bits we use 26 bits which can be set to on acc. to the ascii value of char
    // then we also compare if that bit is already set or not if
    // set then char is duplicate else set that bit

    int h = 0, x = 1;
    int i = 0;
    while (st[i] != '\0')
    {
        x = x << (st[i] - 97);

        // checking the st[i] - 97 bit is on or not
        if ((x & h) > 0)
        {
            cout << st[i];
        }
        else
        {
            h = x | h;
        }
        x = 1;
        i++;
    }
}
int main()
{
    char st[] = "heello world"; // string is taken with smaller letter case

    is_duplicate(st);
    return 0;
}