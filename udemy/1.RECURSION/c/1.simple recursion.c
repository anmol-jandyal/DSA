#include <stdio.h>
#include <conio.h>
void fun(int n)
{
    if (n > 0) //base
    {
        printf("%d ", n); //executed before next call (ascending)
        fun(n - 1);       //recursive call
    }
}

void fun2(int n)
{
    if (n > 0) //base
    {
        fun2(n - 1);      //recursive call
        printf("%d ", n); //executed after above call done completely (decending)
    }
}
int main()
{
    int x;
    printf("enter x");
    scanf("%d", &x);
    fun(x);
    printf("\n");
    fun2(x);
    getch();
}