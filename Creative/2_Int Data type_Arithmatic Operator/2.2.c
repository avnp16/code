// 2.2	WAP to swap 2 value without using third variable

//

#include <stdio.h>

int main()
{
    int a, b;
    a = 5;
    b = 9;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Value after swipe a=%d, b=%d\n", a, b);

    return 0;
}