//18.2  WAP to Enter Char and display ASCII code  

#include<stdio.h>

int main()
{
    char letter;

    printf("Enter the Char :");
    scanf("%c",&letter);

    printf("%c\t,%d\t",letter,letter);

    return 0;
}
