// Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit)
#include <stdio.h>
int main()
{
    float far, cel;
    printf("Enter tempreture in celsius: ");
    scanf("%f", &cel);
    far = (cel * 9 / 5) + 32;
    printf("The Conversion of %.2f into celsius is: %.2f", cel, far);
    return 0;
}