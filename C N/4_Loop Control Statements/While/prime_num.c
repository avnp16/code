#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, count = 0;

    printf("Enter Number\n");
    scanf("%d", &n);

    for (i = 2; i <9; i++)
    {

        if (n % i == 0)
        {
            ++count;
            break;
        }
    }
    if (count==0)
    {
        printf("prime number\n");
    }

    else
    {
        printf("not prime number");
    }

    return 0;
}
