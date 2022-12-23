// 10.1	WAP to Display The Multiplication Table of a Given Number

//

#include <stdio.h>

int main()
{
    int i, a, b, n, j, k, count, ans = 0, sum = 0;
    i = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    do
    {
        ans = n * i;
        printf("%dX%d=%d\n", n, i, ans);

        i++;
    } while (i <= 10);

    return 0;
}