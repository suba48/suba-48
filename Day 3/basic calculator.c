#include<stdio.h>
int main()
{
    char op;
    int a=2, b=4;
    printf("Enter the operator: ");
    scanf("%c", &op);
    switch(op)
    {
        case '+':
        printf("result:%d \n" , a+b);
        case '-':
        printf("result:%d \n" , a-b);
        case '*':
        printf("result:%d \n" , a*b);
        case '/':
        printf("result:%d \n" , a/b);
        
    }
}