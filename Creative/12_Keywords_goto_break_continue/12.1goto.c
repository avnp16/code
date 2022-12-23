//12.1	Program to calculate the sum and average of positive numbers if the user enters a negative number, the sum and average are displayed.

//

#include<stdio.h>

int main() 
{
    int i,n,avg,count=0,sum=0;

    
    input:{
          printf("Enter the number");
          scanf("%d",&n);
          count++;
          if (n>=0)
          {
          sum=sum+n;
         avg=(sum/count);
          }
          
          }

          if (n>=0)
          {
            goto input;
          }
                    
    
    
        printf("Sum is:%d\n",sum);
        printf("Avg is:%d\n",avg);
    



return 0;
}