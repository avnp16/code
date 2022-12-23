// 19.4	WAP to interchange valaue of two variable using function and global variable.

#include <stdio.h>

int swipe();
int y=10;
int main(int argc, char const *argv[])
{
    int x, y;
    printf("Enter Value X & Y :");
    scanf("%d%d", &x, &y);
    swipe(x, y);

    return 0;
}

int swipe(int a, int b)
{   // int temp;
    // temp=a;
    // a=b;
    // b=temp;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Value after Swipe X=%d,Y=%d\n", a, b);
}
