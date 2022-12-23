// 10.4	WAP to find the number and sum of all integer between two user input num which are divisible by given num

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, num1, num2, div;
    int sum = 0;

    printf("Enter Range Number 1 :");
    scanf("%d", &num1);

    printf("Enter Range Number 2 :");
    scanf("%d", &num2);

    printf("Enter Divisible Number : ");
    scanf("%d", &div);

    for (i = num1; i <= num2; i++)
    {
        if (i % div == 0) // even
        {
            printf("%d\t", i);
            sum = sum + i;
        }

    }
    printf("\nSum is :%d", sum);

    return 0;
}
