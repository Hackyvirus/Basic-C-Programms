// Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height

#include <stdio.h>
int main() {
  float rad, areaOfCircle, valumeOfCylinder, height;
  printf("Enter the radius of circle: ");
  scanf("%f", &rad);
  areaOfCircle = 3.14 * rad * rad;
  printf("Enter the Height of Cylinder: ");
  scanf("%f", &height);
  valumeOfCylinder = areaOfCircle * height;
  printf("Area of Circle: %.2f\n", areaOfCircle);
  printf("Volume of Cylinder: %.2f\n", valumeOfCylinder);
  return 0;
}