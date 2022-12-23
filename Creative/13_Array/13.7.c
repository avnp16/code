// 13.7	WAP Sum of the elements of the array

#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;
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
        sum = sum + a[i];
        printf("%d\t", a[i]);
    }
    printf("\n Sum=%d\t", sum);

    return 0;
}