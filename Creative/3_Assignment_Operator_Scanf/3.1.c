// 3.1	WAP to swap 2 value with third variable

#include <stdio.h>

int main()
{
    int a, b, t;
    a = 7, b = 9;

    printf("Value before swipe a=%d, b=%d\n", a, b);

    t = a;
    a = b;
    b = t;

    printf("Value after swipe a=%d, b=%d\n", a, b);

    return 0;
}