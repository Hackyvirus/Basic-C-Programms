// Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.

// formula: S.I. = (P × R × T)/100

#include <stdio.h>
int main()
{
    float principleAmount, rateOfInterest, interestAmount, timePeriod;
    printf("Enter the total amount: ");
    scanf("%f", &principleAmount);
    printf("Enter the total Interest: ");
    scanf("%f", &rateOfInterest);
    printf("Enter the total Time period (In Year): ");
    scanf("%f", &timePeriod);
    interestAmount = principleAmount * rateOfInterest * timePeriod / 100;
    printf("The Interest amount is: %.2f", interestAmount);
    return 0;
}