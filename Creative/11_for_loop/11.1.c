// 11.1	WAP to print Fibonacci series in a given rang
// 0,1,1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

//

#include <stdio.h>

int main()
{
    int i, n, first_num = 0, second_num = 1, third_num;

    printf("Enter the number");
    scanf("%d", &n);
    printf("%d,%d,", first_num, second_num);
    for (i = 3; i <= n; i++)
    {
        third_num = first_num + second_num;
        first_num = second_num;
        second_num = third_num;

        printf("%d,", third_num);
    }

    return 0;
}
