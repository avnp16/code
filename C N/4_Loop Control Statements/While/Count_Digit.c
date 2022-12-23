// clount digit from entered number

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i=0;

    printf("Enter a Number\n");
    scanf("%d", &n);

    while (n != 0)
    {
        n = n / 10;
        i++;
    }

    printf(" Count is :%d", i);

    return 0;
}
