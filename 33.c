// Write a program using function to find average of three numbers
#include <stdio.h>
void avgOfNumber(int val[3]);

int main()
{
    int val[3];
    printf("Enter the Three Values: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &val[i]);
    }
    avgOfNumber(val);
}

void avgOfNumber(int val[3])
{
    int temp = 0;
    for (int i = 0; i < 3; i++)
    {
        temp = val[i] + temp;
    }
    printf("avg is %d\n", temp / 3);
}