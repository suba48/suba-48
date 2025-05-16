#include <stdio.h>
int main() 
{
    int temperature;
    printf("Enter the current temperature (°C): ");
    scanf("%d", &temperature);
    if (temperature < 10) {
        printf("It's cold! Wear a Jacket.\n");
    } else if (temperature >= 10 && temperature <= 20) {
        printf("The weather is mild. Wear a Sweater.\n");
    } else if (temperature > 20) {
        printf("It's warm! Wear a T-shirt.\n");
    } else {
        printf("Invalid temperature input.\n");
    }
    return 0;
}