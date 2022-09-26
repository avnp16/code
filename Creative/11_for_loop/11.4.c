//11.4	WAP to check given num is prime or not

//A prime number is a positive integer that is divisible only by 1 and itself. For example: 2, 3, 5, 7, 11, 13, 17.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, count = 0;

    printf("Enter Number\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("prime number\n");
    }

    else
    {
        printf(" Not a prime number");
    }

    return 0;
}

