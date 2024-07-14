// Write a program to check whether a number is divisible by 97 or not
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number to check: ");
    scanf("%d", &num);
    if (num % 97 == 0)
    {
        printf("%d is Divisible by 97", num);
    }
    else
    {
        printf("%d is not Divisible by 97", num);
    }
    return 0;
}