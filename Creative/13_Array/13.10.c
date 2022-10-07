//13.1	WAP to get the array and search the element from it


#include <stdio.h>

int main()
{
    int n,s, i;
    printf("Enter the number: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }

   printf("Enter the item to be searched: ");
   scanf("%d", &s);
 
   //Research starts from the index 0
   i = 0;
   while (i < n && s != a[i]) {
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