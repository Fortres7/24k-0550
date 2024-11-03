#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char words[5][20];
    char temp[5][20];

    printf("Enter 5 Words:\n");

    for (int i = 0; i < 5; i++) {   
        printf("Enter word %d: ", i + 1);
        fgets(words[i], sizeof(words[i]), stdin);
        words[i][strcspn(words[i], "\n")] = '\0';
    }

    for (int i = 0; i < 5; i++) {
        strcpy(temp[i], words[i]);
        reverseString(temp[i]);  
    }

    for (int i = 0; i < 5; i++) {
        if (strcmp(temp[i], words[i]) == 0) {
            printf("Word %d is a palindrome\n", i + 1);
        } else {
            printf("Word %d is not a palindrome\n", i + 1);
        }    
    }

    return 0;
}
// i took some help of gpt. i used strrev() and the words were getting reversed correctly but when i run the program to check for comparision of reversed string and the input string the condtidion is always false i couldnt figure out what the problem is i will write my code down .

// #include <stdio.h>
// #include<string.h>


// int main(){

//     char words[5][20];
//     char temp[5][20];

//     printf("Enter 5 Words:\n");

//     for (int i = 0; i < 5; i++)
//     {   
//         printf("Enter word %d: ", i + 1);
//         fgets(words[i], 20, stdin);
//     }

//     for (int i = 0; i < 5; i++) {

//         strcpy(temp[i], words[i]);
//     }

//     for (int i = 0; i < 5; i++) {

//         strrev(temp[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {

//         // strcmp(temp[i], words[i]);


//         if (strcmp(temp[i], words[i]) == 0)
//         {
//             printf("Word %d is a palindrome\n", i+1);
//         }
//         else
//         {
//             printf("Word %d is not a palindrome\n", i+1);
//         }    
//     }
    


//     // for (int i = 0; i < 5; i++)
//     // {
//     //     printf("Word %d is: ", i + 1);
//     //     fputs(temp[i], stdout);
//     //     printf("\n");
//     // }
    

    

//     return 0;
// }



