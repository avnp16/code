//

#include <stdio.h>

int sum(int a, int b);
void printtable(int n); // parameter

int main()
{
    int a, b,n;

    printf("Enter Number N");
    scanf("%d",&n);

    printtable(n);   // argument / actual parameter

    return 0;
}

int sum(int x, int y)
{

    return x + y;
}

void printtable(int n)  // parameter / formal perameter
{
    for (int i = 1; i <=10; i++)
    {
        printf("%d\n",n * i);
    }
}
