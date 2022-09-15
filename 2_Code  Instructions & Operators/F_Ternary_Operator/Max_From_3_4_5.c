// which is max from given 3,4,5 ( a,b,c,d,e)
// find max using ternary Operator

#include<stdio.h>


int main()
{
int a=200,b=22,c=10,d=80,e=82,max;

//3  max=a>b?a>c?a:c:b>c?b:c;
//4  max=a>b?(a>c?(a>d?a:d):(c>d?c:d))
       //:(b>c?(b>d?b:d):(c>d?c:d));

//5
    max=a>b?(a>c?(a>d?(a>e?a:e):(d>e?d:e)):(c>d?(c>e?c:e):(d>e?d:e))) 
           :(b>c?(b>d)?(b>e?b:e):(d>e?d:e):(c>d?(c>e?c:e):(d>e?d:e)));

printf("max:%d",max);
return 0;   
}