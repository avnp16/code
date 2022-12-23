//6.7	WAP to program to check whether the given number is positive, negative or zero

#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    

    if(num > 0)
    {
        printf("Number is POSITIVE\n");
    }
    if(num < 0)
    {
        printf("Number is NEGATIVE\n");
    }
    if(num == 0)
    {
        printf("Number is ZERO\n");
    }

    return 0;
}