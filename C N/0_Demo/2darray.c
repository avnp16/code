
#include <stdio.h>

int main()
{
    int n1, n2, i, j, sum = 0;

    printf("Enter the No of Row :");
    scanf("%d", &n1);

    printf("Enter the No of Column :");
    scanf("%d", &n2);

    int a[n1][n2];

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    int k = 0, l = 0;
    int b[n1][n2];

    for (i = 1; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            b[k][l] = a[i][j];
        }
    }

    // shorting
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
           
            for (k = 0; k< n1; k++)
            {
                for (l = 0; l < n2; l++)
                {

                    if (a[i][j] > a[k][l])
                 {
                int temp = a[k][l];
                a[i][j] = a[k][l];
                a[k][l] = temp;
                }
                    
                }
                
            }
            

            
        }
    }
    printf("\n");

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {

            {
                printf("%d", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}