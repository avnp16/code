//Swap Two Numbers Without using third Variable
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter Two Numbers:-\n");
    printf("First Number: ");
    scanf("%d", &num1);

    printf("Second Number: ");
    scanf("%d", &num2);

    printf("\nBefore Swap:\n");
    printf("First Number = %d\tSecond Number = %d", num1, num2);
    
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
        
    printf("\n\nAfter Swap:\n");
    printf("First Number = %d\tSecond Number = %d", num1, num2);
    
    return 0;
}