#include <stdio.h>

int main() {
  
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int *ptr = arr; 
    
    for (int i = 0; i < n; i++) {
        sum += *ptr; 
        ptr++; 
    }

    printf("Sum: %d\n", sum);

    return 0;
}
