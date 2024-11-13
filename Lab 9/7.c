#include <stdio.h>
#include <string.h>

void sortStrings(char arr[][100], int n) {

    char temp[100];

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j][0] > arr[j + 1][0]) {

                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    char arr[100][100];

    printf("Enter number of strings you want to enter: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", arr[i]);
    }

    sortStrings(arr, n);

    printf("Sorted String:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
