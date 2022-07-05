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
void duplicates(char *st)
{
    int count;
    int i = 0, j = 0;
    int n = size(st);
    for (; i < n; i++)
    {
        if (st[i] == '\0')
            continue;

        count = 0;

        for (j = i + 1; j < n; j++)
        {
            if (st[j] == st[i])
            {
                count++;
                st[j] = '\0';
            }
        }
        cout << st[i] << " comes " << count + 1 << " times \n";
    }
}
int main()
{
    char st[] = "finding";
    duplicates(st);
    return 0;
}