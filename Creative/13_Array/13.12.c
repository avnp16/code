//13.12	WAP to insert the element in array
//

#include<stdio.h>

int main() 
{
    int i,n, pos,npv;

    printf("Enter the number = ");
    scanf("%d",&n);

    int a[n];

    for ( i=0; i<n; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
        printf("Enter your position ");
        scanf("%d",&pos);
        

    for ( i=n; i>=pos; i--)
    {
        a[i+1]=a[i];
    }   
        printf("Enter your new position value ");
        scanf("%d",&npv);
        a[pos]=npv;
    
    for ( i = 0; i <n+1; i++)
    {
        printf("%d\t", a[i]);
    }
    
    
    



return 0;
}