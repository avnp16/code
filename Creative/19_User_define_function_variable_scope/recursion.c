//
#include <stdio.h>

void numb(int n,int e,int sum);
//int sum=0;

int main()
{
    int x,e,sum=0;
    printf("Enter Number");
    scanf("%d%d",&x,&e);
    numb(x,e,sum);


    return 0;
}

void numb(int n,int e, int sum)
{
    if (n == e)
        
    {
           

       printf("Sum=%d",sum);
       return;

    }

    printf("%d", n);

    sum=sum+n;

    numb(n + 1,e,sum);

}    

