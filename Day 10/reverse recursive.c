#include<stdio.h>
int reversenumber(int num, int rev)
{
    if(num==0)
    {
    return rev;
    }
    else
    {
    return reversenumber(num/10, rev*10+num%10);
    }
}
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Reversed number: %d\n", reversenumber(number,0));
    return 0;
}