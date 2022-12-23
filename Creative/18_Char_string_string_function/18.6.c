/*18.6	WAP to given string and display following format.
(1) display Sentence case. Nilesh mangukiya
(2) display lowercase. nilesh mangukiya
(3)display upper case. NILESH MANGUKIYA
(4) display title case. Nilesh Mangukiya
(5) display toggle case. nILESH mANGUKIYA */


#include <stdio.h>
#include <string.h>

int main()
{
    char str[80];
    int i, l;

    printf("Enter a string: ");
    gets(str);
    puts(str);

    /* Find the length of the string */
    for (l = 0; str[l] != '\0'; l++)        ;

    /* Display the length of string */
    printf("The length of string is: %d\n", l);

//display title case
for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i-1]==' ' || i==0)
        {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        //else if (str[i] >= 'A' && str[i] <= 'Z')
        //{
        //    str[i] = str[i] + 32;
       // }
        }   

    }
    printf("\nConverted string Title: %s\n", str);


//display toggle case
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("\nConverted string Toggle: %s\n", str);


  //  printf("Enter a string: ");
   // gets(str);
   // puts(str);

    // uppar case
    for (i = 0; str[i] != '\0'; i++)
    {
        //str[i] = (str[i] >= 'a' && str[i] <= 'z') ? (str[i] - 32) : str[i];
        if (str[i] >= 'a' && str[i] <= 'z')
            {
                    str[i]=(str[i] - 32) ;
            }
         else str[i]=str[i];
    }
    printf("\nConverted string Uppar: %s\n", str);

    // lower case
    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = (str[i] >= 'A' && str[i] <= 'Z') ? (str[i] + 32) : str[i];
    }
    printf("\nConverted string Lolwer: %s\n", str);

    printf("\n");


    //display Sentence case

for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = (str[i] >= 'A' && str[i] <= 'Z') ? (str[i] + 32) : str[i];
        
    }
    str[0]=str[0]-32;
    printf("\nConverted string Sentence: %s\n", str);

    printf("\n");




    return 0;
}
