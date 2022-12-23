//11.2	WAP to check given num is Armstrong or not
// reimder number's power values sum is same input value ??
//In the case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself. For example, 153 is an Armstrong number because

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, remainder, oldn, power, sum = 0;

    printf("Enter The Number\n");
    scanf("%d", &n);
    oldn = n;

    while (n != 0)
    {
        remainder = n % 10;
        // power=pow(remainder,3);
        power = (remainder * remainder * remainder);

        sum = (sum) + (power);
        n = n / 10;
    }

    printf("Power Sum is :%d", sum);

    if (sum == oldn)
    {
        printf("\n armstrong number\n");
    }
    else
        printf("\n not a armstrong number\n");

    return 0;
}

