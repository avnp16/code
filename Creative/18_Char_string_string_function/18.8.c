//18.8	WAP to given string and Replace character in the string.
#include<stdio.h>
main()
{
int i;
char a,b,str[100];
printf("Enter the string :");
gets(str);
//asking for replacement
printf("enter the character to be replaced :");
scanf("%c",&a);

getchar();

// which letter to replace the existing one
printf("enter the character to replace :");
scanf("%c",&b);
for(i=0;str[i]!='\0';i++)
{
    if(str[i]==a)
    {
    str[i] = b;
    }
    else
    continue;
}
printf("the new string is :");
puts(str);
}
