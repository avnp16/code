// 6.2	WAP to find the Maximum/Minimum number among the three number
//(using Relational Operator == != > >= < <=)

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the values of a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("a = %d\tb = %d\tc = %d\n", a, b, c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the Maximum number.", a);
        }
        else
        {
            printf("%d is the Maximum number.", c);
        }
    }
    else if (b > c)
        printf("%d is the Maximum number.", b);
    else
        printf("%d is the Maximum number.", c);

    return 0;
}