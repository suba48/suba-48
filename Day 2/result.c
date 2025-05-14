#include <stdio.h>

int main() {
  int marks;
  printf("Enter the student's marks: ");
  scanf("%d", &marks);
  if (marks >= 35) {
    printf("Pass\n");
  } else {
    printf("Fail\n");
  }
  return 0;
}