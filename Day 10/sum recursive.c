#include <stdio.h>
int sum(int n) 
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + sum(n / 10);
    }
}

int main() 
{
    int number=12;
    printf("The sum of digits of %d is: %d\n", number, sum(number));
    return 0;
}