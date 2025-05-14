#include <stdio.h>
#define PI 3.14
int main()
{
    int choice;
    float a, b;
    printf("1. Circle\n2. Rectangle\n3. Square\nChoose (1-3): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &a);
            printf("Area of Circle = %.2f\n", PI * a * a);
            break;
        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &a, &b);
            printf("Area of Rectangle = %.2f\n", a * b);
            break;
        case 3:
            printf("Enter side: ");
            scanf("%f", &a);
            printf("Area of Square = %.2f\n", a * a);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}