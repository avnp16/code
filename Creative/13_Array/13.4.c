// 13.4	WAP to get the array and copy it into the another array

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
        c[i] = a[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t", c[i]);
    }

    return 0;
}