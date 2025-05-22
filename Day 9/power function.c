#include<stdio.h>
int divisor(int a, int b)
{
    int result = 1;
    for(int i=1; i<=b; i++)
    {
        result = result*a;
    }
    return result;
}
int main()
{
    printf("The result is: %d\n", divisor(5,3));
    return 0;
}