#include <stdio.h>

int main() {
    char str[100];
    char *start, *end, temp;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *newline = str;
    while (*newline != '\0') {
        if (*newline == '\n') {
            *newline = '\0';
            break;
        }
        newline++;
    }

    char *ptr = str;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    printf("Length of the string: %d\n", length);
  
    start = str;       
    end = str + length - 1;

    while (start < end) {

        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
