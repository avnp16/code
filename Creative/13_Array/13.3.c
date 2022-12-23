// 13.3	WAP to display the array and display it in the reverse order

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

    printf("\n");
    for (i = n-1; i >= 0; i--) // reveser print
    {
        printf("%d\t", a[i]);
    }

    return 0;
}