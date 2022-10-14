// wap to check given num is armstrong ot not

//

#include<stdio.h>

int main() 
{
    int i,n,oldn,ghan=1,sum=0,rem=1;

   printf("Enter the number");
   scanf("%d",&n);
   oldn=n;

i=1;
do
{
    rem=n%10;
    ghan=(rem*rem*rem);
    printf("%d\t",ghan);
    n=n/10;
    i++;

    sum=(sum)+ghan;
} while (n!=0);

 printf("\n Result %d",sum);
 if (sum==oldn)
  {
    printf("\n this is armstrong number");
 }else     printf("\n not armstrong number");

 

      

return 0;
}