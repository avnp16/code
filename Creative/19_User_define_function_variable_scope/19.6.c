// 19.6	WAP to reverse a string using function.
#include <stdio.h>

void rev(char str[]);

int main(int argc, char const *argv[])
{
    char str[100];
    printf("Enter String:");
    gets(str);
    puts(str);

    rev(str);
    printf("\n", str);
    return 0;
}

void rev(char str[])
{

    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    for (i = count; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
