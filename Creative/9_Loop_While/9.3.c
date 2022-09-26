//9.3	WAP to find sum of first N natural number

#include<stdio.h>
int main()
{
  int n, i = 1, Sum = 0;
  
  printf("\nPlease Enter any Integer Value\n");
  scanf("%d", &n);
  
  while(i <= n)
  {
     Sum = Sum + i;
     i++;
  }
  
  printf("Sum of Natural Numbers = %d\n", Sum);
  return 0;
}