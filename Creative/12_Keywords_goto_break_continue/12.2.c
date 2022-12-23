// 12.2	WAP to calculate sum of number if user enter negative num loop  terminates (10 num maximum)

//

#include <stdio.h>

int main()
{
    int i, n, count, sum = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter the number");
        scanf("%d", &n);

        if (n < 0)
        {
            break;
        }

        sum = sum + n;
    }

    printf("Sum is : %d", sum);
    return 0;
}