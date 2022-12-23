// reverse print of input number i.e 589 to 985
// and result is same number ??
//If a number, which when read in both forward and backward way is same, then such a number is called a palindrome number.


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, rev_num, remainder, s;
    rev_num = 0;

    printf("Enter The Number\n");
    scanf("%d", &n);
    s = n;

    while (n != 0) //(n>0)
    {
        remainder = n % 10;
        rev_num = (rev_num * 10) + (remainder);
        n = n / 10;
    }

    printf("Reverse no is :%d", rev_num);

    if (rev_num == s)
    {
        printf("\npalindrome number");
    }
    else
        printf("\nnot a palindrome number");

    return 0;
}
