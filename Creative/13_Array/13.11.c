//13.11	WAP to replace the element in array
#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int i, n, a[n];
    printf("enter your number = ");
    scanf("%d", &n);

    for ( i = 0; i <n; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }   
        a[1]=10;

    for ( i = 0; i <n; i++)
    {
         printf(" \t %d", a[i]);     /* code */
    }
    
    
    



    return 0;
}
