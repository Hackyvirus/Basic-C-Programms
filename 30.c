// Write a program to calculate the factorial of a given number using a for loop
#include <stdio.h>
int main()
{
    int num, fact = 1, i = 1;
    printf("Enter the Number: ");
    scanf("%d", &num);
    while (i <= num)
    {
        fact *= i;
        i++;
    }
    printf("The factorial is: %d", fact);
    return 0;
}