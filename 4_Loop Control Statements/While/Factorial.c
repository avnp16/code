// find the factorial of given number

#include <stdio.h>
int main()
{

    int n, i ;
    i=1;
    int fact = 1;

    printf("Enter a Number\n");
    scanf("%d", &n);

    while (i <= n)
    {
        fact = fact * n;
        printf("%d \t", n);
        n--;
    }

    printf("Factorial = %d", fact);

    return 0;
}
