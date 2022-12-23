//6.6	WAP to check num and print CREATIVE if given num is greater than 10 
// or print MULTIMEDIA if smallest 10 among three variable without logical operator

//

#include<stdio.h>

int main() 
{
    int n;

    printf("Enter the number :");
    scanf("%d",&n);

    if (n>=10)
    {
        printf("Creative\n");
    }
    
    else printf("Multi Media\n");    



return 0;
}