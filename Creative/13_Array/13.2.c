// 13.2	WAP to display the array with the position.

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("a[%d]=%d\t", i, a[i]);
    }

    return 0;
}