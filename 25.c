// Write a program to print multiplication table of 10 in reversed order.
#include <stdio.h>
int main()
{
    int num = 10;
    for (int i = 10; i >= 1; i--)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}