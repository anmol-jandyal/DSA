#include <iostream>
using namespace std;

int main()
{
    char *st1 = {'a', 'b', 'v', 'd', 'e'};
    // char *s = "hello"; // stores in heap and pointed by s

    cout << st1;
    cin >> st1;
    printf("%s", st1);
    cout << st1;
}