//14.2	WAP to addition of two matrices
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n1,n2,i,j,sum=0;

    printf("Enter the number");
    scanf("%d%d",&n1,&n2);

    int a[n1][n2];
    int b[n1][n2];

    for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    
for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            printf("%d",a[i][j]);
           
        }
        printf("\n");
    }

for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            printf("b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }
    
for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            printf("%d",b[i][j]);
           
        }
        printf("\n");
    }

int n3=n1+n2;
int c[n1][n2];
for ( i = 0; i <n1 ; i++)
{

    for ( j = 0; j < n1; j++)
    {
        
    
       
        c[i][j]=(a[i][j]+b[i][j]);
        printf("%d\t",c[i][j]);
        
    }   

              
    
}
    

    return 0;
}
