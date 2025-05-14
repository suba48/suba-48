#include <stdio.h>

int main()
 {
    float marks[5]; 
    float total = 0, average;
    printf("Enter the marks of 5 subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i]; 
    }
    average = total / 5;
    printf("\nTotal marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}