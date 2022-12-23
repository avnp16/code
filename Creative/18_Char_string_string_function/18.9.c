// 18.9	WAP to given string and Delete character in the string.

#include <stdio.h>
main()
{
    int i;
    char n,str[100];

    printf("Enter the string :");
    gets(str);

    // asking for characor to delete
    printf("Enter the character to be Delete :");
    scanf("%c", &n);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == n)
        {
            break;        
        }
       
    }
    for (; str[i] != '\0'; i++)
        {
        str[i] = str[i + 1];
        } 

    printf("the new string is :");
    puts(str);
}
