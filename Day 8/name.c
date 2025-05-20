#include<stdio.h>
void greet (char name[50], char roll[100])
{
    printf("\n HELLO %S", name);
    printf("\n WELCOME TO THE COMPANY AS A %s",roll);
}
int main()
{
  greet("SUBA","PROJECT MANAGER");
  return 0;
}