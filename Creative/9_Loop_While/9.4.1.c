/* C Program to Print Natural Numbers from 1 to N using While Loop */
 
#include<stdio.h>

int main()
{
  	int Number, i = 1;
  
    printf("\n Please Enter any Integer Value  : ");
  	scanf("%d", &i);
  	

  	printf("\n Please Enter any Integer Value  : ");
  	scanf("%d", &Number);
  	
  	printf("\n List of Natural Numbers from 1 to %d are \n", Number);  	
	while(i <= Number)
  	{
    	printf(" %d \t", i);
    	i++;
  	}
  
  	return 0;
}