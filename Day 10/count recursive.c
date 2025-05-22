#include <stdio.h>
int countDigits(int num) 
{
    if (num < 0)
        num = -num;
    if (num == 0)
        return 0;
    return 1 + countDigits(num / 10);
}
int main() 
{
    int number = 12345;
    int digitCount = countDigits(number);
    printf("Number of digits in %d is: %d\n", number, digitCount);
    return 0;
}