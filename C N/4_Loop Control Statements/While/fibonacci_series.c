//In the Fibonacci Series, a number of the series is obtained by adding the last two numbers of the series.


#include <stdio.h>

int main()
{
    int first_number = 0, second_number = 1, third_number = 1, i, n;
    printf("Enter the number for fibonacci series:");
    scanf("%d", &n);

    printf("Fibonacci Series for a given number:");
    printf("\n%d %d", first_number, second_number);

    while (third_number <= n)
    {
        third_number = first_number + second_number;
        if (third_number >= n)
        {
            break;
        }

        printf(" %d", third_number);
        first_number = second_number;
        second_number = third_number;
        ++i;
    }
    
    return 0;
}