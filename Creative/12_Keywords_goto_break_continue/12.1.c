//12.1	Program to calculate the sum and average of positive numbers if the user enters a negative number, the sum and average are displayed.

//

#include<stdio.h>

int main() 
{
    int i,n,avg,count=0,sum=0;

    
    for ( i = 1; i < 100; i++)
    {
          printf("Enter the number");
          scanf("%d",&n);
          count++;

          if (n<0)
          {
            break;
          }
                

          sum=sum+n;
          avg=(sum/count);
    }
    
    
        printf("Sum is:%d, Average is:%d\n",sum,avg);
    



return 0;
}