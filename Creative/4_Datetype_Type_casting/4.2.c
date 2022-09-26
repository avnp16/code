// 4.2	WAP to Calculate area of square in c ( side*side )

#include <stdio.h>

int main()
{
    int side, area;

    printf("Enter the Length of Side : ");
    scanf("%d", &side);

    area = side * side;
    printf("Area of Square : %d\n", area);

    return (0);
}
