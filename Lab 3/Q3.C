#include <stdio.h>

int main() {
    float salary, taxRate, tax, remainingSalary;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter the tax rate (in percentage): ");
    scanf("%f", &taxRate);

    tax = (taxRate / 100) * salary;
    remainingSalary = salary - tax;

    printf("\nThe tax you need to pay is: %.2f\n", tax);
    printf("Your remaining salary after tax is: %.2f\n", 
remainingSalary);

    
}