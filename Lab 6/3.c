#include <stdio.h>

int main() {
  
  int is_prime, n, i=2;
  int j;
  int a=0, b=1;
  
  printf("Enter number: ");
  scanf("%d", &n);
  
  while(i<=n){
      
      if(n%i==0 && i!=n && i!=1){
          
          is_prime=0;
          break;
      }
      is_prime=1;
      i++;
  }
  
  if(is_prime){
      printf("%d is a Prime Number\n", n);
      
      for(j=0; j<=n; j++){
          
          printf("%d ", a);
          int c = b;
          b = a + b;
          a = c;
      }
      
  }
  else {
  printf("%d is not a Prime Number", n);
  }
    return 0;
}
