#include <stdio.h>


int swap(int x, int y);

int main(){
    
    int a, b;

    printf("Enter Number #1:");
    scanf("%d", &a);

    printf("Enter Number #2:");
    scanf("%d", &b);

    swap(a,b);

    return 0;
}

int swap(int x, int y){
    
    int temp = x;
    x = y;
    y = temp;
    
    printf("Number #1 is %d and Number #2 is %d", x, y);
}
