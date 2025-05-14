#include <stdio.h>
int main() {
  int a = 15, b = 7, c = 3, d;
  d = a + b * c - a / b; 
  printf("d = %d\n", d); 
  d = (a + b) * c - a / b; 
  printf("d = %d\n", d); 
  d = a % 3 + b--;
  printf("d = %d\n", d);
  printf("b = %d\n", b); 
  d = ++a - c;
  printf("d = %d\n", d); 
  printf("a = %d\n", a); 
  return 0;
}