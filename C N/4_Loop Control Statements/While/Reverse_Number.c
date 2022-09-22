// reverse print of input number i.e 589 to 985
//reverse the number entered by the user, and then prints the reversed number on the screen.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,rev_num,remainder;
    rev_num=0;
    n=125;
    
    printf("Enter The Number\n");
    scanf("%d", &n);

    while (n !=0)
    {
        remainder=n%10;
        rev_num=(rev_num*10)+(remainder);
        n=n/10;
    }
    
    printf("Reverse no is :%d",rev_num);


    return 0;
}
