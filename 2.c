#include <stdio.h>
// Area of rectangle using scanf function
int main()
{
    float sideC;
    float sideD;
    float Area2 = sideD * sideC;
    printf("Enter the Value of side 1: ");
    scanf("%f", &sideC);
    printf("Enter the value of side 2: ");
    scanf("%f", &sideD);
    printf("The Area of Second Rectangle is : %f ", Area2);
    return 0;
}