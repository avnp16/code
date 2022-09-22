#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, count = 0;

    printf("Enter Number\n");
    scanf("%d", &n);

    for (i = 2; i <n-1; i++)
    {

        if (n % i == 0)
        {
            printf("not prime number");
            break;
        }

        else printf("prime number\n");
                    break;

    }
    
    
    

    return 0;
}
