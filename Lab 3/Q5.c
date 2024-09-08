#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    printf("Enter the principal amount (100 to 1,000,000 Rs): ");
    scanf("%f", &principal);

    if (principal < 100 || principal > 1000000) {
        printf("Error: Principal must be between 100 and 1,000,000 Rs.\n");
    } else {
        printf("Enter the rate of interest (5%% to 10%%): ");
        scanf("%f", &rate);

        if (rate < 5 || rate > 10) {
            printf("Error: Rate must be between 5%% and 10%%.\n");
        } else {
            printf("Enter the time period (1 to 10 years): ");
            scanf("%f", &time);

            if (time < 1 || time > 10) {
                printf("Error: Time period must be between 1 and 10 years.\n");
            } else {
                simpleInterest = (principal * rate * time) / 100;
                printf("Simple Interest: %.2f Rs\n", simpleInterest);
            }
        }
    }

    return 0;
}
