#include <stdio.h>

#define MAX_T 37.0

int countexceed(double t) {
    static int c = 0;
    if (t > MAX_T) {
        c++;
    }
    return c;
}

int main() {
    double t;
    char ch;

    do {
        printf("Enter temperature (C): ");
        scanf("%lf", &t);

        if (t > MAX_T) {
            printf("Temp %.2f exceeds max %.2f.\n", t, MAX_T);
        } else {
            printf("Temp %.2f is within limit.\n", t);
        }

        printf("Exceed count: %d\n", countexceed(t));

        printf("Enter another? (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

    return 0;
}
