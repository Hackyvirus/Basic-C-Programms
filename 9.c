// Write a function to convert Celsius temperature into Fahrenheit.
#include <stdio.h>

// function prototype
float converter(float);

int main() {
  float temp_in_c;
  printf("Enter the tempreture to convert into Fah: ");
  scanf("%f", &temp_in_c);
  int temp_in_f = converter(temp_in_c);
  printf("\nYour tempreture in Fah is: %i\n", temp_in_f);
  printf("Thank For Using our Services...");
}

float converter(float cel) {
  float fah = (cel * 9 / 5) + 32;
  return fah;
};