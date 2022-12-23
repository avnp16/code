//19.1	WAP to enter two value and that value and that values of sum,sub,mul,and div using UDF.

#include<stdio.h>

int sum();
int sub();
int mul();
int div();

int main(int argc, char const *argv[])
{
    
    int x,y;

    printf("Enter Value One by one\n");
    scanf("%d%d",&x,&y);
    sum(x,y);
    sub(x,y);
    mul(x,y);
    div(x,y);

    return 0;
}

sum(int a,int b){
        int sum=(a+b);
        printf("Sum=%d\n",sum);
}

sub(int a, int b){
    int sub=a-b;
    printf("Sub=%d\n",sub);  
}

int mul(int a,int b){
    int mul=a*b;
    printf("Mul:%d\n",mul);
}

int div(int a,int b){
    int div=a/b;
    printf("Div=%d\n",div);

}