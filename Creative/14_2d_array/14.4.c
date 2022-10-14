// 14.4	WAP to find the max from the matrix


#include<stdio.h>

int main(int argc, char const *argv[])
{

    int i,j,n1,n2;
    int sum;

    printf("Enter the number\n");
    scanf("%d %d",&n1,&n2);

    int a[n1][n2];

    for ( i = 0; i<n1; i++)
    {
        for ( j = 0; j<n2; j++)
        {   

            printf("a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    
     for ( i = 0; i<n1; i++)
    {
        for ( j = 0; j<n2; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
int max=a[0][0];
    for ( i = 0; i<n1; i++)
    {
        for ( j = 0; j<n2; j++)
        {
            if (max<a[i][j])
            {
                max=a[i][j];
            }
            

        }
        printf("\n");
    }
            printf("Max=%d",max);

    return 0;






}