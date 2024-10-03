#include<stdio.h>

int main()
{
	
	int i;
	
	for(i=1; i<=5; i++)
	{
				
		if(i==1 || i==5){
			
		printf("%c %c %c %c %c\n", i+64,i+65,i+66,i+67,i+68);	
		}
		
		else if(i==2 || i==4){
		
		printf("  %c   %c \n", i+65,i+68);	
			
		} 
		
		else if(i==3){
		
		printf("    %c  \n", i+66);	
			
		} 		
		
	}
	
	
}
