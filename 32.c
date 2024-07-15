// Write a program to check whether a given number is prime or not, Implement
// using other types of loops.

#include <stdio.h>
int main()
{
    int num, isPrime = 1, isPrime2 = 1;
    printf("Enter the Number: ");
    scanf("%d", &num);
    printf("Using while Loop\n");
    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        int i = 2;
        while (i <= num)
        {
            if (num % i == 0)
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
        printf("%d is Prime Number\n", num);
    }
    else
    {
        printf("%d is not a Prime Number\n", num);
    }
    printf("Using Do while loop\n");
    int j = 2;
    if (num <= 1)
    {
        isPrime2 = 0;
    }
    else
    {
        do
        {
            if (num % j == 0)
            {
                isPrime2 = 0;
            }
            else
            {
                isPrime2 = 1;
            }
            j++;
        } while (j <= num / 2);
    }
    if (isPrime2)
    {
        printf("%d is Prime Number\n", num);
    }
    else
    {
        printf("%d is not a Prime Number\n", num);
    }
    return 0;
}