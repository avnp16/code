//

#include<stdio.h>

int main() 
{
    int i,a,b,n,j,avg,count=0,sum=0;


    
    for ( i = 1; i <10; i++)
    {
        printf("Enter the number");
        scanf("%d",&n);
        
        if (n>=0)
        {
            count++;
            sum=sum+n;
            
        } else 
            break;
        
    }
    avg=sum/count;
    printf("sum is :%d",sum);
    printf("Avg :%d",avg);
    
    

    



return 0;
}