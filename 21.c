// Write a program to determine whether a character entered by the user is
// lowercase or not

#include <stdio.h>
int main()
{
    char cha;
    printf("Enter the charecter: ");
    scanf("%c", &cha);
    if (cha >= 'a' && cha <= 'z')
    {
        printf("%c is Lowercase letter.", cha);
    }
    else
    {
        printf("%c is not lowercase letter.", cha);
    }
    return 0;
}