//

#include<stdio.h>

int main() 
{
    int i,a,b,n,rem,sum=0;
    n=5978;

   // printf("Enter the number");
 //   scanf(%d,&n);

    for ( i = 1;n!=0; i++)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    
    printf("Reverse Number is :%d",sum);





return 0;
}