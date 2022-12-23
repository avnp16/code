// 12.3	WAP to calculate sum of number if user enter negative it is not added to result(user enter maximum 10 num)

//

#include <stdio.h>

int main()
{
    int n, i, count, sum = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter the number");
        scanf("%d", &n);

        if (n < 0)
        {
            continue;
        }

        sum = sum + n;
    }

    printf("Sum is: %d", sum);

    return 0;
}