// Write a program to calculate the factorial of a given number using a for loop
#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter the Number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("the factorial of 10 is: %d", fact);
    return 0;
}