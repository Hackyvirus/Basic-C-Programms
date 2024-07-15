// Write a program to print multiplication table of a given number n.
// Write a program to print multiplication table of a given number n.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Multiplication table using for loop\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    printf("Multiplication table using while loop\n");
    int i = 1;
    while (i <= 10)
    {
        printf("%d * %d = %d\n", num, i, num * i);
        i++;
    }
    printf("Multiplication table using do-while loop\n");
    int j = 1;
    do
    {
        printf("%d * %d = %d\n", num, j, num * j);
        j++;
    } while (j <= 10);
    return 0;
}