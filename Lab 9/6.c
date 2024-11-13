#include <stdio.h>


void findmaxmin(int arr[], int size, int *max, int *min) {

    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < size; i++) {

        if (arr[i] > *max) {
            *max = arr[i];
        }

        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {

    int n;

    printf("Enter the number of elements you want: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;

    findmaxmin(arr, n, &max, &min);

    printf("The Maximum element is: %d\n", max);
    printf("The Minimum element is: %d\n", min);

    return 0;
}
