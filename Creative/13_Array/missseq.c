// sorting in arrays

#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 5, 6, 7, 8, 9, 10};
    int nrr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int n, v,count;
    int i, j, s = 0;
    int sum = 0;

    n = 10;

    sum = (n * (n + 1)) / 2;
    printf("Sum of n =%d\n",sum);

    for (i = 0; i < n; i++)
    {
        s = s + arr[i];
    }

    printf("sum of current%d\n",s);
    v = sum - s;
   printf("missing value is%d\n",v);

    // find the missing value in sequance

    for (i = 0; i < n+1; i++)
    {
        
            if (arr[i] != nrr[i])
            {
               count=nrr[i];
                break;
            }
        
    }

    printf("Count =%d\n", count);

    return 0;
}