#include <stdio.h>

float calculate(float num1, float num2, char operation) {
    switch (operation) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Error\n");
                return 0;
            }
        default:
            printf("Invalid operation.\n");
            return 0;
    }
}

int main() {
    float num1, num2, result;
    char operation;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    result = calculate(num1, num2, operation);
    if (operation == '+' || operation == '-' || operation == '*' || (operation == '/' && num2 != 0)) {
        printf("Result: %.2f\n", result);
    }

    return 0;
}
