#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    a = 80;
    b = 90;
    c = 90;

    /*printf("Enter the Value of A=");
    scanf("%d\n",&a);
    printf("Enter the Value of B=");
    scanf("%d\n",&b);
    printf("Enter the Value of C=");
    scanf("%d\n",&c);*/

    if (a == b)
    {
        if (a == c)
        {
            printf("All a,b,c are Equal\n");
        }
        else if (a > c)
        {
            printf("a & b are Equal & C is Min\n");
        }
        else
            printf("a & b are Equal & C is max\n");
    }
    else if (b == c)
    {
        if (a > c)
        {
            printf("A is max\n");
        }
        else
            printf("A is min\n");
    }
    else if (c == a)
    {
        if (c > b)
        {
            printf("B is Min\n");
        }
        else
            printf("B is max\n");
    }
    else
        printf("all are diffrent\n");
    if (a != b)

    {

        if (a > b)
        {
            if (a > c)
            {
                printf("A is Max\n");
            }
            else
                printf("c is Max\n");
        }
        else if (b > c)
        {
            printf("B is mmmax\n");
        }
        else
            printf(" c is max\n");
    }

    return 0;
}
