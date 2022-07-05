/*
    as characters is stored in binary of the code given in ascii standard
    a-z :97 - 122
    A-Z: 65 - 90

    a-A = 97 - 65 = 32
    b-B = 32
*/

#include <iostream>
using namespace std;

int main()
{
    char str[] = "ANMOL JandIyal4343*/-";
    cout << str << "\n";
    // CHANGING UPPER CASE TO LOWER AND LOWER TO UPPER;
    int i = 0;
    while (str[i] != '\0')
    {
        // if char is upper case
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i++] += 32;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        { // if char is in lower case
            str[i++] -= 32;
        }
        else
        {
            i++;
        }
    }
    cout << str;
    return 0;
}