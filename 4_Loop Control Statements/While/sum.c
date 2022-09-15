#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,s=1,e=30,n=7;
    int sum=0;

    //printf("Enter Number");
    //scanf("%d",&n);

    for (i=s;i<=e;i++)
    {
        if (i % n ==0)
        {
               printf("%d",i);
               sum=sum+i;
      }
        
              

       // if (n % i==0)
    
          
    
        
       
    }
     printf("Sum is :=%d",sum);


    return 0;
}
