// Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>
int main()
{
    int num[4];
    printf("Enter the first value: ");
    scanf("%i", &num[0]);
    printf("Enter the second value: ");
    scanf("%d", &num[1]);
    printf("Enter the third value: ");
    scanf("%d", &num[2]);
    printf("Enter the fourth value: ");
    scanf("%d", &num[3]);
    if (num[0] >= num[1] && num[0] >= num[2] && num[0] >= num[3])
    {
        printf("%d is greatest number among them.", num[0]);
    }
    else if (num[1] >= num[0] && num[1] >= num[2] && num[1] >= num[3])
    {
        printf("%d is greatest number among them.", num[1]);
    }
    else if (num[2] >= num[1] && num[2] >= num[0] && num[2] >= num[3])
    {
        printf("%d is greatest number among them.", num[2]);
    }
    else if (num[3] >= num[1] && num[3] >= num[2] && num[3] >= num[0])
    {
        printf("%d is greatest number among them.", num[3]);
    }
    return 0;
}