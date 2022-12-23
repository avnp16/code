//9.8	WAP program to count number of digits in a number

// 5987 = 4

#include<stdio.h>

int main() 
{
    int i,n,count=0;
    i=1;

    printf("Enter the number");
    scanf("%d",&n);

    while (i<=n)
    {

        n=(n/10);
        count++;
    }
    
    printf("Count is :%d\n",count);



return 0;

}

