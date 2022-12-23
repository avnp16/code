// 12.2	WAP to calculate sum of number if user enter negative num loop  terminates (10 num maximum)

//

#include <stdio.h>

int main()
{
    int i=1, n, count, sum = 0;

    input:
    {
        printf("Enter the number");
        scanf("%d", &n);

        if (n >= 0)
        {
            sum = sum + n;
        }
    }
    
    if (n>0)
    {
        goto input;
    }
        printf("Sum is : %d", sum);
    return 0;
}