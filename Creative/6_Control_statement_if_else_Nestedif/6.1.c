//6.1	WAP to find the Maximum/Minimum number of two value (using Relational Operator == != > >= < <=)

#include <stdio.h>

int main()
{
    int num1, num2;

    /* Input two numbers from user */
    printf("Enter two numbers: \n");
    scanf("%d%d", &num1, &num2);

    /* If num1 is maximum */
    if(num1 > num2)
    {
        printf("%d is maximum\n", num1);        
    }

    /* If num2 is maximum */
    if(num2 > num1)
    {
        printf("%d is maximum\n", num2);
    }

    /* Additional condition check for equality */
    if(num1 == num2)
    {
        printf("Both are equal\n");
    }

    return 0;
}