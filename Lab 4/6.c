#include <stdio.h>

int main() {
    float cost, discount, discountAmount, finalAmount;

    printf("Enter the cost of shopping: ");
    scanf("%f", &cost);

    discount = 0.0;
    discountAmount = 0.0;

    if (cost >= 500) {
        if (cost < 2000) {
            discount = 5;
        } else if (cost >= 2000 && cost <= 4000) {
            discount = 10;
        } else if (cost > 4000 && cost <= 6000) {
            discount = 20;
        } else if (cost > 6000) {
            discount = 35;
        }
        
        discountAmount = (cost * discount) / 100;
        finalAmount = cost - discountAmount;
        
        printf("Actual amount: %.2f\n", cost);
        printf("Saved amount: %.2f\n", discountAmount);
        printf("Amount after discount: %.2f\n", finalAmount);
    } else {
        printf("The minimum amount eligible for a discount is 500.\n");
    }

    return 0;
}
