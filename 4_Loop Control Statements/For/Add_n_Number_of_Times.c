//This C program adds n number of times which will be entered by the user.

#include <stdio.h>

int main()
{
    int i, n, sum = 0,value;
    
    printf("Enter the number of you want to add\n");
    scanf("%d", &n);
    
    printf("Enter %d Number\n",n);
    
    for (i = 1; i<= n; i++)
    {
        scanf("%d",&value);
        sum = sum + value;
    }
    
    printf("Sum of entered numbers = %d\n",sum);
    return 0;
}