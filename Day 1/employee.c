#include <stdio.h>
int main() {
    char name[50];      
    int age;           
    float salary;       
    printf("Enter employee's name: ");
    fgets(name, sizeof(name), stdin); 
    printf("Enter employee's age: ");
    scanf("%d", &age);
    printf("Enter employee's salary: ");
    scanf("%f", &salary);
    printf("\nEmployee Information:\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    return 0;
}