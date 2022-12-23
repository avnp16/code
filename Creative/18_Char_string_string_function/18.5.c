/*18.5	WAP to Enter name and count following format. 
(1) Length of given string.
(2) Total Num of alphabet.
(3) Total Num of digit.
(4) Total num of upper character.
(5) Total Num of Lower character.
(6) Total Num of space.
(7) Total Num of words
(8) Total Num of other character.*/

//

#include<stdio.h>
#include<string.h>

int main() 
{
    char str[50];
    int l,i;

    printf(" Enter Sentense :");
    gets(str);
    puts(str);

//(1) Length of given string.
 /* Find the length of the string */
    for (l = 0; str[l] != '\0'; l++);

    /* Display the length of string */
    printf("The length of string is: %d\n", l);

    l=0;

//(2) Total Num of alphabet.

    for ( i = 0;str[i]!='\0'; i++)
    {
        if (str[i]>=65 && str[i]<=122)
        {
            l++;
        }
        
    }
    printf("Total Num of alphabet: %d\n", l);
    l=0;

// (3) Total Num of digit.  
    
for ( i = 0;str[i]!='\0'; i++)
    {
        if (str[i]>=48 && str[i]<=57)
        {
            l++;
        }
        
    }
    printf("Total Num of digit: %d\n", l);
    l=0;

//(4) Total num of upper character.

for ( i = 0;str[i]!='\0'; i++)
    {
        if (str[i]>=65 && str[i]<=90)
        {
            l++;
        }
        
    }
    printf("Total num of upper character: %d\n", l);
    l=0;

//(5) Total Num of Lower character.

for ( i = 0;str[i]!='\0'; i++)
    {
        if (str[i]>=97 && str[i]<=122)
        {
            l++;
        }
        
    }
    printf("Total Num of Lower character: %d\n", l);
    l=0;

//(6) Total Num of space.

for ( i = 0;str[i]!='\0'; i++)
    {
        if (str[i]>=32 && str[i]<=32)
        {
            l++;
        }
        
    }
    printf("Total Num of space: %d\n", l);
    l=0;

//(7) Total Num of words

for ( i = 0;str[i]!='\0'; i++)
    {
        if ((str[i-1]==' ' || str[i]==0) && str[i]!=32)
        {
            l++;
        }
        
    }
    printf("Total Num of words: %d\n", l+1);
    l=0;

//(8) Total Num of other character.*/

for ( i = 0;str[i]!='\0'; i++)
    {
       // if (str[i]!=((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122) || (str[i]=32) || (str[i]>=48 && str[i]<=57) ))
        if ((str[i]!=(str[i]>=32 && str[i]<=32)))

        
        {
            l++;
        }
        
    }
    printf("Total Num of other character: %d\n", l);
    l=0;



return 0;
}