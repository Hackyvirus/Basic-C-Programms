// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2

#include <stdio.h>
int main()
{
    float f, m, g = 9.8;
    printf("Enter the mass of body: ");
    scanf("%f", &m);
    f = m * g;
    printf("Force is applied on body is : %f", f);
    return 0;
}