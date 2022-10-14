// wap to find the maximum/minimum number among the three number

//

#include<stdio.h>

int main() 
{
    int a,b,c;
    a=45,b=10,c=50;
    int max,min;

    if (a>b)
    {
        if(a>c)
        {
            max=a;
        } else max=c;
    }else if (b>c)
    {
        max=b;
    }else max=c;
    
    if (a<b)
    {
        if(a<c)
        {
            min=a;
        } else min=c;
    }else if (b<c)
    {
        min=b;
    }else min=c;

printf("max : %d\n",max);
printf("min : %d\n",min);

return 0;
}