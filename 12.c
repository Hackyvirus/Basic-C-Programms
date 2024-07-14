// 1. Write a C program to calculate area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user.

#include <stdio.h>
int main() {
  float side1, side2, areaOfReactangle;
  printf("Enter the value of side 1: ");
  scanf("%f", &side1);
  printf("Enter the value of side 2: ");
  scanf("%f", &side2);
  areaOfReactangle = side1 * side2;
  printf("Area of Rectangle: %.2f", areaOfReactangle);
  return 0;
}