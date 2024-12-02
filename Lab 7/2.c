#include <stdio.h>


int main() {

    char str[100];
    int a=0, e=0, i=0, o=0, u=0;

    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin); 

    for (int j = 0; str[j] != '\0'; j++)
    {
      if (str[j] == 'a' || str[j] == 'A')
      {
        a++;
      }

      else if (str[j] == 'e' || str [j] == 'E'){
        e++;
      }

      else if (str[j] == 'i' || str[j] == 'I'){
        i++;
      }

      else if (str[j] == 'o' || str [j] == 'O'){
        o++;
      }

      else if (str[j] == 'u' || str[j] == 'U'){
        u++;
      }
      
    }

    if (a==0 && e==0 && i==0 && o==0 && u==0)
    {
      printf("The string does not have any vowel\n");
    }
    else{
      printf("A or a: %d \n", a);
      printf("E or e: %d \n", e);
      printf("I or i: %d \n", i);
      printf("O or o: %d \n", o);
      printf("U or u: %d \n", u);
    }
    
    return 0;
}
