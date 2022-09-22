// print odd and even number using while
// Write a C program to check whether the given number is even or odd.

#include <stdio.h>
int main(int argc, char const *argv[])
{

    int i, n;
    i = 1;
    n = 30;

    while (i <= n)

    {
        if (i % 2 != 0)
            printf("%d\t", i);
        i++;
    }

    printf("\n");

    i = 1;
    n = 30;

    while (i <= n)
    {
        if (i % 2 == 0)
            printf("%d\t", i);
        i++;
    }

    return 0;
}
