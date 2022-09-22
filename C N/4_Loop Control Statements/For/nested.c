// decrease

#include <stdio.h>

void main()
{
    int i, j, k, sum = 0, count = 0;

    /*
    *****
    *****
    *****
    *****
    *****
    */

    // for ( i = 1; i <=5; i++)         //raw  (5 raw)
    //     { for (j = 1; j<=5; j++)     //col (5 Col)
    //     { printf("*"); }
    //     printf("\n");  }
    //     printf("----------------\n");

    /*
     *
     **
     ***
     ****
     *****
     */

    // for ( i = 1; i <=5; i++)     //raw  (5 raw)
    // { for (j = 1; j<=i; j++)     // col increase 1 to 5 (last of i) ++small to big
    // { printf("*"); }
    // printf("\n");  }
    // printf("----------------\n");

    /*
    *****
    ****
    ***
    **
    *
    */
    // for ( i = 1; i <=5; i++)         //raw  (5 raw)
    // { for (j = 6-i; j>=1; j--)       //col decrease (last of i) 5 to 1  --big to small
    // { printf("*"); }                 // BIG TO SMALL
    // printf("\n");  }
    // printf("----------------\n");

    //

    /*(1)
    1
    12
    123
    1234
    12345
    */

    // for ( i = 1; i <=5; i++)         //raw  (5 raw)
    //     { for (j = 1; j<=i; j++)     //col increase 1 to 5 (last of i) ++ small to big
    //     { printf("%d",j); }
    //     printf("\n");  }
    //     printf("----------------\n");

    /*(2)
    1
    21
    321
    4321
    54321
    */

    // for ( i = 1; i <=5; i++)     //raw  (5 raw)
    // { for (j = i; j>=1; j--)     //col decrease 5 to 1 --big to small
    //     { printf("%d",j); }
    // printf("\n");  }
    // printf("----------------\n");

    /* (3)
    12345
    2345
    345
    45
    5
    // */
    //      for ( i = 1; i <=5; i++)        //raw  (5 raw)
    //     { for (j = i; j<=5; j++)         //col decrease 5 to 1 (big to small)
    //     { printf("%d",j); }
    //     printf("\n");  }
    //     printf("----------------\n");

    /* (4)
    10101
    0101
    101
    01
    1
    */

    //   for(i=1; i<=5; i++)
    // {
    //     for(j=1; j<=6-i; j++)
    //     {
    //         if(j == 2 || j== 4)
    //         {
    //             printf("0");
    //         }
    //         else
    //         {
    //             printf("1");
    //         }
    //     }
    //     printf("\n");     }

    /* (5)
    1
    01
    101
    1010
    10101
    // */
    //     for(i=1; i<=5; i++)
    //     {
    //         for(j=1; j<=i; j++)                 //col increase 1 to 5 ( small to big)
    //         {
    //             // For every odd column print 1
    //             if(j % 2 == 1)
    //             {
    //                 printf("1");
    //             }
    //             else
    //             {
    //                 printf("0");
    //             }
    //         }

    //         printf("\n");

    //       }
    //               printf("----------------\n");

    /* (6)
    1
    01
    101
    0101
    10101
    */

    // for(i=1; i<=5; i++)
    //     {
    //         for(j=1; j<=i; j++)                 //col increase 1 to 5 ( small to big)
    //         {
    //             if((i+j) % 2 == 0)  {
    //                  printf("1");            }
    //             else             {
    //                 printf("0");            }
    //         }

    //         printf("\n");
    //       }
    //               printf("----------------\n");

    /* (7)
    5
    45
    345
    2345
    12345
    */
    //  for ( i = 5; i >=1; i--)       //raw  (5 raw)
    // { for (j = i; j<=5; j++)        //col decrease 5 to 1 ( big to small)
    // { printf("%d",(j)); }
    // printf("\n");  }
    // printf("----------------\n");

    /*(8)
    5
    54
    543
    5432
    54321
    */

    // for ( i = 5; i >=1; i--)         //raw  (5 raw)
    //     { for (j = 5; j>=i; j--)     //col increase 1 to 5 small to big
    //     { printf("%d",j); }
    //     printf("\n");  }
    //     printf("----------------\n");

    /* (9)
1
13
135
1357
13579
*/

    // for(i=1; i<=5; i++)
    //     {
    //         k = 1;
    //         for(j=1; j<=i; j++)
    //         {
    //             printf("%d", k);
    //             k=k+2;
    //         }
    //         printf("\n");
    //         }

    //     printf("----------------\n");

    /* (10)
    2
    24
    246
    2468
    246810
    */

    // for(i=1; i<=5; i++)
    //     {
    //         k = 2;
    //         for(j=1; j<=i; j++)
    //         {
    //             printf("%d", k);
    //             k=k+2;
    //         }
    //         printf("\n");
    //         }

    //     printf("----------------\n");

    /* (side wali) pending
    1
    13
    135
    1357
    13579
    */

    // for ( i = 1; i <=5; i++)
    // {
    //  k=1;
    //     for (j = 1; j<=i; j++)

    //     {

    //         printf("%d",k);
    //         k=k+2;
    //         }

    // printf("\n");  }
    // printf("----------------\n");

    /*  (11)
    1
    31
    531
    7531
    97531

    */

    // for ( i = 1; i <=5; i++)
    // {
    //  k=((i*2)-1);
    //     for (j = i; j>=1; j--)

    //     {

    //         printf("%d",k);
    //         k-=2;
    //         }

    // printf("\n");  }
    // printf("----------------\n");

    /* (12)
    2
    42
    642
    8642
    108642
    */

    //  for ( i = 1; i <=5; i++)
    //     {
    //      k=((i*2));
    //         for (j = i; j>=1; j--)

    //         {

    //             printf("%d",k);
    //             k-=2;
    //             }

    //     printf("\n");  }
    //     printf("----------------\n");

    /* (13)
    13579
    3579
    579
    79
    9
    */
    //  for(i=1; i<=5; i++)
    //     {
    //         k = (i * 2) - 1;

    //         for(j=i; j<=5; j++)
    //         {
    //             printf("%d", k);
    //             k=k+2;
    //         }

    //         printf("\n");

    //         }

    //     printf("----------------\n");

    /* (14)

    246810
    46810
    6810
    810
    10

    */
    //  for(i=1; i<=5; i++)
    //     {
    //         k = (i * 2);

    //         for(j=i; j<=5; j++)
    //         {
    //             printf("%d", k);
    //             k=k+2;
    //         }

    //         printf("\n");

    //         }

    //     printf("----------------\n");

    /* (15)
    1
    23
    456
    78910
    11 12 13 14 15
    */

    // int count=1;
    //     for (i = 1; i <= 5; i++)

    //     {
    //         for (j = 1; j <= i; j++)
    //         {
    //             printf("%d",count++);
    //         }
    //         printf("\n");

    //         }

    //     printf("----------------\n");

    /* (16) pending

    */

    for (i = 1; i <= 5; i++)
    {
        k = ((i * 2) - 1);
        for (j = i; j >= 1; j--)

        {
            printf("%d", k);
            k -= 2;
        }

        printf("\n");
    }

    for (i = 1; i <= 5; i++)
    {
        k = (11 - i - count);

        for (j = 1; j <= 6 - i; j++)

        {
            printf("%d", k);
            k -= 2;
        }
        count++;

        printf("\n");
    }
    printf("----------------\n");

    /*(17)
    1
    1*
    1*1
    1*1*
    1*1*1

    */

    // for ( i = 1; i <=5; i++)

    //     { k=1;

    //         for (j = 1; j<=i; j++,k++)
    //     {
    //         if (k% 2==0)
    //         {
    //             printf("*");
    //         }
    //                else printf("1");

    //         }

    //     printf("\n");  }
    //     printf("----------------\n");

    /* (18)
    15 14 13 12 11
    10 9 8 7
    6 5 4
    3 2
    1
    */
    // int count=15;
    // for (i = 1; i <= 5; i++)
    // // raw  (5 raw)

    // {
    //     sum = 0;
    //     for (j = 1; j <= 6 - i; j++)
    //     {
    //         // printf("%d",j);
    //         sum = sum + j;
    //     }

    //     for (k = 1; k <= 6 - i; k++){
    //         printf("%d",count--);
    //     }

    //     printf("\n");
    // }
    // printf("----------------\n");

    /*  (19)
    13579
    1357
    135
    13
    1
    */
    //  for(i=1; i<=5; i++)
    //     {
    //         k =1;
    //         for(j=i; j<=5; j++)
    //         {
    //             printf("%d", k);
    //             k=k+2;
    //         }

    //         printf("\n");

    //         }

    //     printf("----------------\n");

    /* (20)
   108642
   10864
   1086
   108
   10
       */
    // for (i = 1; i <= 5; i++)

    // {
    //     k=10;
    //     for (j = 1; j <= 6 - i; j++)
    //     {
    //         printf("%d", k);
    //          k=k-2;

    //     }

    //     printf("\n");
    // }
    // printf("----------------\n");
}