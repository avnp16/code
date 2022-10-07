// sorting in arrays

#include <stdio.h>

int main()
{
    int arr[] = {12, 45, 23, 51, 19, 8};
    int n = 6;
    int i, j;

    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}