// 13.1	WAP to get the array and display it

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
        printf("%d\t", a[i]);
    }

    return 0;
}