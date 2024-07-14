// Write a program to determine whether a student has passed or failed.To pass, a student requires a total of 40 % and at least 33% in each subject.Assume there are three subjects and take the marks as input from the user

#include <stdio.h>
int main()
{
    float marks[3], percentage;
    printf("Enter marks of Subject 1: ");
    scanf("%f", &marks[0]);
    printf("Enter marks of Subject 2: ");
    scanf("%f", &marks[1]);
    printf("Enter marks of Subject 3: ");
    scanf("%f", &marks[2]);
    if (marks[0] > 33 && marks[1] > 33 && marks[2] > 33)
    {
        if ((((marks[0] + marks[1] + marks[2]) / 300) * 100) > 40)
        {
            printf("Student is Passed....%f", ((marks[0] + marks[1] + marks[2]) / 300) * 100);
        }
        else
        {
            printf("Student is Failed....");
        }
    }
    else
    {
        printf("Student is Failed....");
    }
}