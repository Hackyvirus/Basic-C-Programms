// find the length of string
#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "sushant";
    for (int i = 0; i <= 7; i++)
    {
        printf("%c", s[i]);
    }
    printf("%ld", strlen(s));
}