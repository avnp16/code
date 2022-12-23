//7.1	WAP to Find the Maximum/Minimum number among the Five number using logical operator
//Logical Operator && || !

#include<stdio.h> 
 
int main() 
{ 
 int a,b,c,d,e; 
 
 printf("ENTER THE FIVE NUMBERS\n"); 
 scanf("%d %d %d %d %d",&a,&b,&c,&d,&e); 
 
 if(a>b && a>c &&  a>d && a>e) 
  printf("%d is largest\n", a); 
 
 else 
  if(b>c && b>d && b>e) 
   printf("%d is largest\n", b); 
 
 else 
  if(c>d && c>e) 
   printf("%d is largest\n", c); 
 
 else 
  if(d>e) 
   printf("%d  is largest\n", d); 
 
 else 
  printf("%d is largest\n", e); 
  
 return 0; 
}