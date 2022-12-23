// 19.5	WAP to find out maximum out of three num uisng function.

#include <stdio.h>

int max();

int main(int argc, char const *argv[])
{
    int arr[3];
    printf("Enter 3 Values:");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    max(arr);

    return 0;
}

int max(int arr[])
{
    for (int i = 1; i < 3; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    printf("Max=%d\n", arr[0]);
}
