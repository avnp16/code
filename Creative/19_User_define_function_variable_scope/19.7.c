// 19.7	WAP to sort a list of name in alphabetical order using function.

#include <stdio.h>
#include <string.h>

// void shor(char a[][]);

int main(int argc, char const *argv[])
{
    char a[5][100];
    int i;

    for (i = 0; i < 5; i++)
    {

        printf("Enter String \n");
        scanf("%s", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%s", a[i]);
        printf("\n");
    }

    // shor(a);

    char temp[50];
    int n = 5;
    int j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {

            if ((strcmp(a[i], a[j]) > 0))
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%s\t", a[i]);
    }

    return 0;
}

// void shor(char a[][])
// {

//     int n = 5;
//     int i, j;
//     char temp[50];

//     for (i = 0; i < n-1; i++)
//     {
//         for (j = i+1; j < n; j++)
//         {
//                 if (strcmp(a[i],a[j]>0))
//                 {
//                     strcpy(temp,a[i]);
//                     strcpy(a[i],a[j]);
//                     strcpy(a[j],temp);
//                 }
//         }
//     }

//     for (i = 0; i < n; i++)
//     {
//         printf("%s\t", a[i]);
//     }

// }
