// 19.3	WAP to find out factorial of a given num uisng function.

#include <stdio.h>

int fact();

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter the number to get factorial\n");
    scanf("%d", &n);

    printf("%d", fact(n));



    return 0;
}

int fact(int n)
{
    int i, fact = 1;
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
    // printf("factorial:%d\n", fact);
}