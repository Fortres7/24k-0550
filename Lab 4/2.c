#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 && num % 2 == 0 && num % 10 == 0) {
        printf("Valid number\n");
    } else {
        printf("Invalid number\n");
    }

    return 0;
}
