#include <stdio.h>
int isPrime(int n) {
    if(n < 2){
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int main() 
{
    int n = 48;
    printf("Is %d prime?\n", n);
    if (isPrime(n)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}