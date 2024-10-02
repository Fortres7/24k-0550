#include <stdio.h>

int main() {
    char coffeeType;
    char manualOption;
    char sizeOption;
    int isDouble = 0;
    int timeFactor = 100;  
    int manual = 0;        
    
    printf("Enter the coffee type (B for Black, W for White): ");
    scanf(" %c", &coffeeType);

    printf("Is the cup size double? (Y for Yes, N for No): ");
    scanf(" %c", &sizeOption);
    if (sizeOption == 'Y' || sizeOption == 'y') {
        isDouble = 1;
        timeFactor = 150;  
    }

    printf("Is the coffee manual? (Y for Yes, N for No): ");
    scanf(" %c", &manualOption);
    if (manualOption == 'Y' || manualOption == 'y') {
        manual = 1;
    }

   
    switch (coffeeType) {
        case 'W':   
        case 'w':
            printf("Making White Coffee...\n");
            printf("Step 1: Put Water. Time: %d mins\n", 15 * timeFactor / 100);
            printf("Step 2: Add Sugar. Time: %d mins\n", 15 * timeFactor / 100);
            printf("Step 3: Mix Well. Time: %d mins\n", 20 * timeFactor / 100);
            printf("Step 4: Add Coffee. Time: %d mins\n", 2 * timeFactor / 100);
            printf("Step 5: Add Milk. Time: %d mins\n", 4 * timeFactor / 100);
            printf("Step 6: Final Mix. Time: %d mins\n", 20 * timeFactor / 100);
            break;

        case 'B':   
        case 'b':
            printf("Making Black Coffee...\n");
            printf("Step 1: Put Water. Time: %d mins\n", 20 * timeFactor / 100);
            printf("Step 2: Add Sugar. Time: %d mins\n", 20 * timeFactor / 100);
            printf("Step 3: Mix Well. Time: %d mins\n", 25 * timeFactor / 100);
            printf("Step 4: Add Coffee. Time: %d mins\n", 15 * timeFactor / 100);
            if (!manual) {
                printf("Step 5: Final Mix. Time: %d mins\n", 25 * timeFactor / 100);
            }
            break;

        default:
            printf("Invalid coffee type selected.\n");
            break;
    }

    printf("Coffee is ready!\n");
    return 0;
}
