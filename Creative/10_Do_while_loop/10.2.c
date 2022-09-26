//10.2	WAP to Display The cube of the number upto given N number 

// cub = ghan

#include<stdio.h>
 
int main()
{
  int number, cube;
 
  printf("Please Enter any integer Value :");
  scanf("%d", &number);
  
  cube = number * number * number;
  
  printf("Cube of a given number %d is  =  %d\n", number, cube);
 
  return 0;
}
