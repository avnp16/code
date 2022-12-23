// 9.5	WAP to print Range of ODD num if first num is smallest and print range of Even num is largest

//

#include <stdio.h>

int main()
{
    int first, second;

    printf("Enter the first number");
    scanf("%d", &first);
    printf("Enter the second number");
    scanf("%d", &second);

    if (first < second)
    {
        while (first <= second)
        {
            if (first % 2 != 0)
                printf("%d\t", first);
            first++;
        }
    }

    if (first > second)

    {
        while (first >= second)
        {
            if (second % 2 == 0)
                printf("%d\t", second);
            second++;
        }
    }

    return 0;
}