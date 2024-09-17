#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            break;
    }

    return 0;
}
