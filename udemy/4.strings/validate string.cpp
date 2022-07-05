#include <iostream>
using namespace std;

// for validating string should contain only digits and alphabets and also digits doesnot come at first place

int validate(char *str)
{
    int i = 0;
    if (str[i] >= 48 && str[i] <= 57)
    {
        return 0;
    }
    i++;
    while (str[i] != '\0')
    {
        if ((!(str[i] >= 65 && str[i] <= 90)) && (!(str[i] >= 97 && str[i] <= 122)) && (!(str[i] >= 48 && str[i] <= 57)))
            return 0;
        i++;
    }
    return 1;
}
int main()
{
    char str[] = "afdfndofjdsifjd14";
    if (validate(str))
    {
        cout << "string is valid";
    }
    else
    {
        cout << "not valid";
    }
    char h = 'l';
    cout << (int)h;
    return 0;
}