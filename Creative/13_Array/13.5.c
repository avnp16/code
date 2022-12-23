// 13.5	WAP to get the array and copy the reverse of the array into the another array

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);

    int a[n];
    int c[n];

    for (i = 0; i < n; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }

    
    for (i = 0; i <n; i++)
    {
        c[i] = a[n-i-1];
        printf("c[%d]=%d\t",i, c[i]);
    }

    return 0;
}