#include <stdio.h>
int main()
{
    float a = 3;
    float *b = &a;
    float **c = &b;
    printf("The Adreess: %p\n", &a);
    printf("The Adreess: %p\n", &b);
    printf("The adress of %p\n", &c);
    printf("The value at this %u adress %d\n", &c, *c);
    printf("The value at %p is %f", &b, *b);
}