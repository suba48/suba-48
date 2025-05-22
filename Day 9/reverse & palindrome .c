#include<stdio.h>
int reversed(int n)
{
    int num=n,original=n , reversed = 0;
    while(num!=0)
    {
    reversed=reversed*10+num % 10;
    num/=10;
    }
    if(original==reversed)
    {
        printf("%d\n its a palindrome",original);
    }
    else{
        printf("%d\n its  not a palindrome",original);
    }
    return reversed;
}
int main()
{
    printf("\n reversed number:%d\n",reversed(1221));
    return 0;
}