//4.3	WAP to Calculate Area of Rectangle (area = l*b)
// length and breadth

#include<stdio.h>
 
int main()
{
   int length, breadth, area;
 
   printf("Enter the Length of Rectangle : ");
   scanf("%d", &length);
 
   printf("Enter the Breadth of Rectangle : ");
   scanf("%d", &breadth);
 
   area = length * breadth;
   printf("Area of Rectangle : %d\n", area);
 
   return 0;
}
