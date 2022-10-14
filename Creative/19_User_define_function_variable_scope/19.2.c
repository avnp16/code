// 19.2	WAP to area of triangle,circle,rectangel and square with switch case.

#include <stdio.h>

void traiangle();
void circle();
void rectange();
void square();

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter Value\n");
    printf("triangle= 1\n");
    printf("circle=2\n");
    printf("rectange=3\n");
    printf("sqare=4\n");

    scanf("%d", &n);

    switch (n)
    {
    case 1: traiangle(); break;
    case 2: circle();    break;
    case 3: rectange();  break;
    case 4: square();    break;
    default:break;
    }

    return 0;
}

void traiangle()
{   float a,b;
    float result;
    printf("Enter h & base\n");
    scanf("%f%f",&a,&b);
    result=a*b/2;
    printf("area is :%.2f\n",result);
}
void circle()
{
    float a,b;
    float result;
    printf("Enter radius\n");
    scanf("%f%f",&a,&b);
    result=3.14159*a*b;
    printf("area is :%.2f\n",result);
}

void rectange()
{
    float a,b;
    float result;
    printf("Enter W & L\n");
    scanf("%f%f",&a,&b);
    result=a*b;
    printf("area is :%.2f\n",result);}
void square()
{
    float a,b;
    float result;
    printf("Enter Side & Side\n");
    scanf("%f%f",&a,&b);
    result=a*b;
    printf("area is :%.2f\n",result);}
    
     