// This C program is used to display the multiplication table of a given number.

#include <stdio.h>

int main()
{
    int num, i = 1;
    printf("Enter any Number:");
    scanf("%d", &num);
    printf("Multiplication table of %d: ", num);

    while (i <= 10)
    {
        printf("\n%d x %d = %d", num, i, (num * i));
        i++;
    }
    return 0;
}