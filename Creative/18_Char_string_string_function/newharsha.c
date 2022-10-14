#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char a[100], b[100];

    printf(" Enter String = ");
    gets(a);
    puts(a);

    printf("%d", strlen(a));
    printf("%c", strrev(a));
   //printf("%s", strcopy(b,a));

    return 0;
}
