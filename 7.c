// Write a program to determine whether a student has passed or failed. To pass,
// a student requires a total of 40% and at least 33% in each subject. Assume
// there are three subjects and take the marks as input from the user.

#include <stdio.h>
int main() {
  float marks[3];
  float total_marks=0;
  int passed = 1;
  printf("Enter the marks of Sub1: ");
  scanf("%f", &marks[0]);
	
  printf("Enter the marks of Sub2: ");
  scanf("%f", &marks[1]);
  printf("Enter the marks of Sub3: ");
  scanf("%f", &marks[2]);

  // total marks
  for (int i = 0; i < 3; i++) {
    total_marks += marks[i];
    if (marks[i] < 33) {
      passed = 0;
    }
  }
  printf("Total marks: %f\n", total_marks);
  // calculate total percentage
  float percentage = (total_marks / 300) * 100;
  printf("The percentage: %f\n", percentage);
  if (percentage >= 40 && passed) {
    printf("Student has passed the Exam");
  } else {
    printf("Student failed in exam");
  }
}