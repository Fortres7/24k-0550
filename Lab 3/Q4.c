#include <stdio.h>

int main() {
    float distance = 1207.0;
    float fuelPriceForward = 118.0;
    float fuelPriceReturn = 123.0;
    float fuelAverage;

    printf("Enter the car's fuel average (km per liter): ");
    scanf("%f", &fuelAverage);

    if (fuelAverage <= 0) {
        printf("Error: Please enter a positive value for the fuel average.\n");
    } else {
        float totalDistance = 2 * distance;
        float fuelConsumed = totalDistance / fuelAverage;
        float totalFuelCost = (distance / fuelAverage * fuelPriceForward) + 
                              (distance / fuelAverage * fuelPriceReturn);

        printf("Total fuel consumed: %.2f liters\n", fuelConsumed);
        printf("Total fuel cost: %.2f\n", totalFuelCost);
    }

    return 0;
}
