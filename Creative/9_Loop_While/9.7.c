// 9.7	WAP to print reverse given num

//

#include <stdio.h>

int main()
{
    int i = 1, a, b, n, j, k, count, sum = 0, remainder, rev_num = 0;

    printf("Enter the number");
    scanf("%d", &n);

    while (i <= n)
    {
        remainder= n % 10;
        rev_num = (rev_num * 10) + remainder;
        n = n / 10;
        i++;
    }

    printf("%d\n", rev_num);

    return 0;
}