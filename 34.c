// Write a function to convert Celsius temperature into Fahrenheit.
#include <stdio.h>
void converter(float);
void converter(float temp)
{
    float f = (temp * 9 / 5) + 32;
    printf("the tempreture in Farenheit is: %.2f", f);
}
int main()
{
    float temp;
    printf("Enter the tempreture in Celsius: ");
    scanf("%f", &temp);
    converter(temp);
    return 0;
}