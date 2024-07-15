// Calculate income tax paid by an employee to the government as per the slabs mentioned below:
// Income Slab Tax
// 2.5 – 5.0L 5%
// 5.0L - 10.0L 20%
// Above 10.0L 30%

#include <stdio.h>
int main()
{
    float income;
    printf("Enter the Income of Emplyee (In Lacks): ");
    scanf("%f", &income);
    if (income > 2.5 && income <= 5.0)
    {
        printf("Employee has to pay 5%% tax on their income.");
    }
    else if (income > 5.0 && income >= 10.0)
    {
        printf("Employee has to pay 20%% tax on their income");
    }
    else if (income > 10.0)
    {
        printf("Employee has to pay 30%% tax on their income.");
    }
    else if (income < 2.5)
    {
        printf("you don't have to pay tax on their income");
    }
    return 0;
}