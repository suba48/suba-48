#include <stdio.h>
int main() 
{
    float basic, hra, da, gross_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic);
    hra = 0.10 * basic; 
    da = 0.20 * basic;  
    gross_salary = basic + hra + da;
    printf("The gross salary is: %.2f\n", gross_salary);
    return 0;
}