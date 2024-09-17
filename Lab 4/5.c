#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); 

    if (ch >= 'a' && ch <= 'z') {
        printf("The character is a small alphabet\n");
    }
    else if (ch >= 'A' && ch <= 'Z') {
        printf("The character is a capital alphabet\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("The character is a digit\n");
    }
    else {
        printf("The character is a special character\n");
    }

    return 0;
}
