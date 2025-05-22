#include<stdio.h>
int is_perfect(int n)
{
    int sum = 0;
    for(int i=1; i < n; i++)
    {
        if(n%i==0)
        {
            sum = sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d is perfect", n);
    }
    else{
        printf("%d is not perfect", n);
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter the value:");
    scanf("%d", &num);
    is_perfect(num);
    return 0;
} 