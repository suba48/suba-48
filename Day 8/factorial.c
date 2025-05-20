#include<stdio.h>
int factorial (int a)
{
    int fact = 1;
    for(int i=1; i<=a; i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{
        printf("%d", factorial(12)); 
        return 0;
}