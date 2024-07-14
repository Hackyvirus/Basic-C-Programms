// Write a program using function to find average of three numbers.

#include <stdio.h>

int avg(float, float, float);
int main()
{
	int num[3];
	for (int i = 0; i < 3; i++)
	{
		printf("Enter the Number: ");
		scanf("%d", &num[i]);
		printf("The Number is : %d\n", num[i]);
	}
	int n = avg(num[0], num[1], num[2]);
	printf("\nAVG is : %d", n);
}

int avg(float a, float b, float c)
{
	int avg = (a + b + c) / 3;
	return avg;
}