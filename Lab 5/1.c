#include <stdio.h>

int main() {
    float totalCalories, fatGrams, caloriesFromFat, fatPercentage;

    printf("Enter the number of total calories: ");
    scanf("%f", &totalCalories);

    printf("Enter the number of fat grams: ");
    scanf("%f", &fatGrams);

    if (totalCalories < 0 || fatGrams < 0) {
        printf("Error: Calories and fat grams must be non-negative.\n");
        return 1;
    }

    caloriesFromFat = fatGrams * 9;

    if (caloriesFromFat > totalCalories) {
        printf("Error: Calories from fat cannot be greater than total calories.\n");
        return 1;
    }

    fatPercentage = (caloriesFromFat / totalCalories) * 100;

    printf("Percentage of calories from fat: %.2f%%\n", fatPercentage);

    return 0;
}
