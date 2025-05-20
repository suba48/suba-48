#include <stdio.h>
int add(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}
int mul(int x, int y) {
    return x * y;
}
float divide(int x, int y) {
    if (y != 0)
        return (float)x / y;
    else {
        printf("\n Error: Division by zero");
        return 0;
    }
}
int main() {
    int a, b;
    char op;
    printf("Enter values: ");
    scanf("%d %c %d", &a, &op, &b);
    switch (op) {
        case '+': printf("Result: %d\n", add(a, b)); break;
        case '-': printf("Result: %d\n", sub(a, b)); break;
        case '*': printf("Result: %d\n", mul(a, b)); break;
        case '/': printf("Result: %.2f\n", divide(a, b)); break;
        default:  printf("Invalid operator\n");
    }
    return 0;
}