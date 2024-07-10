// Write a program to check whether a number is divisible by 97 or not.
#include <stdio.h>
int main() {
  int num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  if (num % 97 == 0) {
    printf("The Number is divisible by 97");
  } else {
    printf("The Number is not divisible by 97");
  }
  return 0;
}