// wap to display the multi. table of given number


#include<stdio.h>

int main() 
{
    int n,i;
    int multi;

    printf("Enter the number");
    scanf("%d",&n);

    for ( i = 1; i <=10; i++)
    {
        multi=i*n;
        printf("%d x %d =%d\n",n,i,multi);
    }
    
    



return 0;
}