#include <stdio.h>

int main() {
    char str[100];
    char *start, *end, temp;
    int length = 0;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *ptr = str;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    printf("Length of the string: %d\n", length);

    char str2[length];

    for (int i = 0; i < length; i++)
    {
      str2[i] = str[i];
    }
    
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

    for (int i = 0; i < length; i++)
    {
      if (str[i] == str2[i])
      {
        count++;
      }
      
    }

    if (count == length)
    {
      printf("The String is palindrome");
    }
    else{
      printf("The String is not palindrome");
    }
    
    return 0;
}
