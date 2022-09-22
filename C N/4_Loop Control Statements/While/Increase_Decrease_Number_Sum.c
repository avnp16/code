// Increase and Decrease Number using While Loop

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;
    int sum = 0; // sum always 0 zero thi intial thay
    i = 1;       // i= initialisation kya thi sharu karvu (starting Value)
    n = 5;       // n = kya sudhi karvu ( kya puru karvu) (Ending Value)

    printf("Enter The Number\n");
    scanf("%d", &n);

    while (i <= n) // increase number   (i<=n) ahiya thi ahiya sudhi banne ma same aave
    {
        sum = sum + i;
        printf("%d\t", i); // kya thi chalu karvu chhe te
        i++;               // increase , decrease
    }
    printf("Sum = %d", sum);

    i = 1;
    sum = 0;

    printf("\n");

    while (i <= n) // decrase number (i<=n) ahiya thi ahiya sudhi banne ma same aave
    {
        sum = sum + n;
        printf("%d\t", n); // kya thi chalu karvu chhe te
        n--;               // increase , decrease
    }

    printf("Sum = %d", sum);

    return 0;
}
