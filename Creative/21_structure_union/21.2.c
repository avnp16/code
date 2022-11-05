//21.2	WAP to searching an item from array of structure.


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

    struct demo obj[3];
    int i;

for ( i = 0; i <3; i++)
{
    
    printf("Enter the int [%d]:",i);
    scanf("%d", &obj[i].inta);
    printf("%d\n", obj[i].inta);

    printf("Enter the float:");
    scanf("%f", &obj[i].flob);
    printf("%f\n", obj[i].flob);

    printf("Enter the charactor:");
    getchar();
    scanf("%c", &obj[i].chac);
    printf("%c\n", obj[i].chac);

    printf("Enter the Name:");
    getchar();
    gets(obj[i].carr);
    puts(obj[i].carr);

}

int s; int n=3;
printf("Enter the item to be searched: ");
   scanf("%d", &s);
 
   //Research starts from the index 0
   i = 0;
   while (i < n && s != obj[i].inta) {
      i++;
   }
 
   if (i < n) {
      printf("The element is found in the position = %d\n", i + 1);
      printf("The element is found in the index number = %d\n", i);

   } else {
      printf("Element not found!");
   }

   
    return 0;
}