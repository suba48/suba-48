#include <stdio.h>
int main() {
  int numSubjects;
  printf("Enter the number of subjects: ");
  scanf("%d", &numSubjects);
  if (numSubjects <= 0) {
    printf("Invalid number of subjects.\n");
    return 1;
  }
  int marks[numSubjects];
  int totalMarks = 0;
  for (int i = 0; i < numSubjects; i++) {
    printf("Enter marks for subject %d: ", i + 1);
    scanf("%d", &marks[i]);
    totalMarks += marks[i];
  }
  float averageMarks = (float)totalMarks / numSubjects;
  char grade;
  if (averageMarks >= 90) {
    grade = 'A';
  } else if (averageMarks >= 80) {
    grade = 'B';
  } else if (averageMarks >= 70) {
    grade = 'C';
  } else if (averageMarks >= 60) {
    grade = 'D';
  } else {
    grade = 'F';
  }
  printf("Average Marks: %.2f\n", averageMarks);
  printf("Grade: %c\n", grade);
  return 0;
}