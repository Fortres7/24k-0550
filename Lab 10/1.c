#include <stdio.h>

void printarray(int arr[], int size) {
    
    if (size == 0) {
        return;
    }
 
    printf("%d ", arr[0]);
    
    printarray(arr + 1, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array elements: ");
    printarray(arr, size);
    
    return 0;
}