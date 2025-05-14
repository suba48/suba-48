#include <stdio.h>

int main() {
    int a = 15, b = 30, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}