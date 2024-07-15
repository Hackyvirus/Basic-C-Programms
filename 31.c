// Write a program to check whether a given number is prime or not using loops
#include <stdio.h>
int main()
{
    int num, isPrime = 1;
    printf("Enter the Number: ");
    scanf("%d", &num);
    if (num <= 1)
    {
        isPrime = 1;
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            if (num % i == 1)
            {
                isPrime = 0;
                break;
            }
            else
            {
                isPrime = 1;
                break;
            }
        }
    }
    if (isPrime)
    {
        printf("%d is prime Number", num);
    }
    else
    {
        printf("%d is not a prime Number", num);
    }
    return 0;
}