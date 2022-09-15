#include<stdio.h>

int main(int argc, char const *argv[])
{
    char sname[20];
    int eng,guj,hindi,com,maths;
    float perc;
    char grade1[4]=("A+");
    char grade2[4]=("A");
    char grade3[4]=("B+");
    char grade4[4]=("B");
    char grade5[4]=("C");
    char grade6[10]=("No Grade");
    //char resultp[4]=("PASS");
    //char result0[4]=("FAIL");



    printf("Enter Student Name\n"); 
    scanf("%s",sname);
    printf("hi %s Ready to Enter Your Marks ",sname);
    
    printf("\nEnter English Mark :");
    scanf("%d",&eng);    
    printf("Enter Gujarati Mark :");
    scanf("%d",&guj);    
    printf("Enter Hindi Mark :");
    scanf("%d",&hindi);    
    printf("Enter Computer Mark :");
    scanf("%d",&com);    
    printf("Enter Maths Mark :");
    scanf("%d",&maths);    
    
    printf("\nStudent Name : %s",sname);
    printf("\nSubject     Total Mark      Obtained Mark");
    printf("\nEnglish     100              %d",eng);
    printf("\nGujarati    100              %d",guj);
    printf("\nHindi       100              %d",hindi);
    printf("\nComputer    100              %d",com);
    printf("\nMaths       100              %d",maths);

perc=(eng+guj+hindi+com+maths)/5;
    printf("\nYour Percentage is: %.2f %%",perc);
    
if ((eng>=40)&&(guj>=40)&&(hindi>=40)&&(com>=40)&&(maths>=40))

 {if (perc>=90) //a+
   printf("\nYour Grade is: %s ",grade1); 

 if ((perc>=80)&&(perc<90)) //
    printf("\nYour Grade is: %s ",grade2);

 if ((perc>=70)&&(perc<80)) //b+
    printf("\nYour Grade is: %s ",grade3);

if ((perc>=60)&&(perc<70))  //b
  printf("\nYour Grade is: %s ",grade4);

if ((perc>=40)&&(perc<60))  //c
  printf("\nYour Grade is: %s ",grade5);

if (perc<40)  //fail
  printf("\nYour Grade is: %s ",grade6);
printf("\nYour Result is: Pass ");
  
 }
 else printf("\nYour Grade is: No Grade (Mark is Under 40)");


if ((eng<40)||(guj<40)||(hindi<40)||(com<40)||(maths<40))

   // printf("\nYour Result is: %s ",result0);
    printf("\nYour Result is: Fail (Mark is Under 40)");

       
    
    return 0;
}
