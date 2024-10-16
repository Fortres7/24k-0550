#include <stdio.h>

int main() {
   
   int array[6];
   int array2[6];
   int i, last, first;
   
   for(i=0; i<6; i++){
      printf("Enter Number #%d: ",i+1);
      scanf("%d", &array[i]);
   }
   
   first = array[0];
   last = array[5];
   
   for(i=0; i<6; i++){
       
       array2[i] = array[5-i];
   }
   
   array2[0] = array[5];
   array2[5] = array[0];
   
   for(i=0; i<6; i++){
       printf("%d\n", array2[i]);
   }
   
    return 0;
}
