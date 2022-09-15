#include <stdio.h>
int main(int argc, char const *argv[])
{

    int num = 5, index = 0;
    printf("Enter a Number\n");
    scanf("%d", &num);

    do
    {

        printf("%d\t", index + 1);
        index = index + 1;

    } while (index < num);

    return 0;
}
