// 13.8	WAP Find the max value from the array

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

    // storing the largest number at arr[0]
    for (i = 0; i < n; i++)
    {
        if (a[0] < a[i])
        {
            a[0] = a[i];
        }
    }

    printf("Max = %d\t", a[0]);

    return 0;
}