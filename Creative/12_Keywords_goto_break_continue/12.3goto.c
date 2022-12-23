// 12.3	WAP to calculate sum of number if user enter negative it is not added to result(user enter maximum 10 num)

#include <stdio.h>

int main()
{
    int i=1, n, count, sum = 0;

    input:
    {
        printf("Enter the number");
        scanf("%d", &n);
        i++;

        if (n >= 0)
        {
            sum = sum + n;
        }
    }
    
    if (i<=10)
    {
        goto input;
    }
        printf("Sum is : %d", sum);
    return 0;
}