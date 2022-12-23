// 13.13	WAP to delete the element from the array

#include <stdio.h>

int main()
{
    int i, n, pos, npv;

    printf("Enter the number = ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
    printf("Enter your position ");
    scanf("%d", &pos);

    for (i = pos; i < n; i++)
    {
        a[i] = a[i + 1];
    }

    for (i = 0; i < n - 1; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}