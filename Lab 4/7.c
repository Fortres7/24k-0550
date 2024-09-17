#include <stdio.h>

int main() {
    int customerID, units;
    char name[50];    //I used google to know how to store more than 1 character.
    float amount, surcharge = 0.0, totalAmount;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 199) {
        amount = units * 16.20;
    } else if (units >= 200 && units < 300) {
        amount = units * 20.10;
    } else if (units >= 300 && units < 500) {
        amount = units * 27.10;
    } else {
        amount = units * 35.90;
    }

    if (amount > 18000) {
        surcharge = amount * 0.15;
    }

    totalAmount = amount + surcharge;

    printf("Customer ID :%d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed :%d\n", units);
    printf("Amount Charges @Rs. %.2f per unit: %.2f\n", (units < 200 ? 16.20 : units < 300 ? 20.10 : units < 500 ? 27.10 : 35.90), amount);
    printf("Surcharge Amount: %.2f\n", surcharge);
    printf("Net Amount Paid by the Customer: %.2f\n", totalAmount);

    return 0;
}
