#include <iostream>
#include <windows.h>
using namespace std;

class moving
{
    char *arr;
    int n; // no. of element
public:
    moving()
    {
        cout << "enter n";
        cin >> n;
        arr = new char[n];
    }
    void leftshift()
    {
        for (int i = 0; arr[0] != '\0'; i++)
        {
            system("cls");

            cout << "|" << arr << "|";

            for (int j = 0; arr[j] != '\0'; j++)
            {
                arr[j] = arr[j + 1];
            }
            Sleep(500);
        }
    }
    void rotation()
    {
        int j = 0;
        for (int i = 0; arr[0] != '\0'; i++)
        {
            system("cls");

            cout << "|" << arr << "|";
            char temp = arr[0];
            for (j = 0; arr[j] != '\0'; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[j - 1] = temp;
            Sleep(500);
        }
    }
    void input()
    {
        int i = 0;
        char ch;
        fflush(stdin);
        cout << "enter array to display it moving";
        while (cin.get(ch) && ch != '\n' && (i < n - 1))
        {
            arr[i++] = ch; // this loop use to place string in arr;
            cout << ch;
        }
    }
};

int main()
{
    moving obj;
    obj.input();
    obj.leftshift();

    obj.input();
    obj.rotation();
    return 0;
}