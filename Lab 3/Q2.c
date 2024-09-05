#include<stdio.h>

int main(){
	int temp,a,b;

	printf("Enter first number");
	scanf("%d", &a);

	printf("Enter second number");
	scanf("%d", &b);
	
	temp = a;
	a = b;
	b = temp;

	printf("Your new first number is: %d\n" , a);
	printf("Your new second number is: %d\n" , b);	

}
