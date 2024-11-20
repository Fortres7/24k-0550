#include <stdio.h>

int search(int arr[], int len, int tgt, int idx) {
    if (idx >= len) return -1;
    if (arr[idx] == tgt) return idx;
    return search(arr, len, tgt, idx + 1);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int len = sizeof(arr) / sizeof(arr[0]);
    int tgt = 8;

    int res = search(arr, len, tgt, 0);

    if (res != -1) {
        printf("Element %d found at index %d.\n", tgt, res);
    } else {
        printf("Element %d not found.\n", tgt);
    }

    return 0;
}
