// 21.1	WAP to given int,float,char data and display it.

#include <stdio.h>

struct demo
{
    int inta;
    float flob;
    char chac;
    char carr[50];
};

int main()
{

    struct demo obj;
    int i;

    printf("Enter the int:");
    scanf("%d", &obj.inta);
    printf("%d\n", obj.inta);

    printf("Enter the float:");
    scanf("%f", &obj.flob);
    printf("%f\n", obj.flob);

    printf("Enter the charactor:");
    getchar();
    scanf("%c", &obj.chac);
    printf("%c\n", obj.chac);

    printf("Enter the Name:");
    getchar();
   // fgets(obj.carr,sizeof(obj.carr),stdin);
    gets(obj.carr);
    puts(obj.carr);

    return 0;
}