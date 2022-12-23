//9.2	Write a C program to print all natural numbers in reverse


/* C Program to Print Natural Numbers in reverse using While Loop */
 
#include<stdio.h>

int main()
{
  	int Number, i;
  
  	printf("\n Please Enter the Maximum Integer Value (Upper Limit)  : ");
  	scanf("%d", &Number);
  	
  	i = Number;
  	printf("\n List of Natural Numbers from %d to 1 are \n", Number);  	
	
	while(i >= 1)
  	{
    	printf(" %d \t", i);
    	i--;
  	}
  
  	return 0;
}