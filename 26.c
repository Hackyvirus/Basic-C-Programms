// Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>
int main()
{
    int num = 0;
    for (int i = 1; i <= 10; i++)
    {
        num += i;
        printf("%d + %d = %d\n", i, num, num);
    }
    printf("The sum of first 10 natural Numbers: %d\n", num);

    printf("Using while loop\n");
    int i = 1, num2 = 0;
    while (i <= 10)
    {
        num2 += i;
        printf("%d + %d = %d\n", i, num2, num2);
        i++;
    }
    printf("The sum of first 10 natural Numbers: %d\n", num2);
    return 0;
}