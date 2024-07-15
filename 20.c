// Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the Year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("%d is Leap Year", year);
    }
    else
    {
        printf("%d is not a Leap Year", year);
    }
    return 0;
}