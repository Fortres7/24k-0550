#include <stdio.h>

void swaped(int *aPtr, int *bPtr, int *cPtr) {
    int temp = *aPtr;  
    *aPtr = *bPtr;     
    *bPtr = *cPtr;     
    *cPtr = temp;      
}

int main() {
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    swaped(&a, &b, &c);

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
