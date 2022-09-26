// 9.6	WAP to find factorial of a given number

//

#include <stdio.h>

int main()
{
    int i, n,p,fact = 1;

    printf("Enter the number :");
    scanf("%d", &n);
    p=n;

    while (n >= 1)
    {
        fact = fact * n;
        // printf("%d\t\n",n);
        n--;
    }

    printf("Factorial of %d is : %d\n",p,fact);

    return 0;
}