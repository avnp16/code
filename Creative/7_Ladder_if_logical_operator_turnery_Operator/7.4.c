//7.4	WAP to input electicity unit charges and calculate total elecricity bill according to the given condition:For first 50 units rs. 0.50/unit/For next 100 units rs. 0.75/unit/ For next 100 umits rs. 1.20/unit/for unit above 250 Rs. 1.50/unit/An additional surcharge of 20% is added to the bill 

#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int unit;
    float rate50, rate150, rate250, rate250u;
    float bill, FinalBill,sur_charge;
 //   char cname[20];

    rate50 = 0.50;
    rate150 = 0.75;
    rate250 = 1.25;
    rate250u = 1.50;

  //  printf(" \n Enter Your Name Here \n ");
    //scanf(" %s", &cname);
   // printf(" \nhi %s", cname);

    printf("\nEnter Here Comsumed Unit\n");
    scanf(" %d", &unit);
   // printf("\n%s Your Consumed Unit is :%d", cname, unit);
    printf("\nBill Date is :%02d-%02d-%02d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("Due Date is :%02d-%02d-%02d\n", tm.tm_mday + 20, tm.tm_mon + 1, tm.tm_year + 1900);

    if (unit <= 50)
    {
        bill = unit * rate50;
    }

    else if (unit <= 150)
    {
        bill = (50 * rate50) + ((unit - 50) * rate150);
    }

    else if (unit <= 250)
    {
        bill = (50 * rate50) + (100 * rate150) + ((unit - 150) * rate250);
    }

    else if (unit > 250)
    {
        bill = (50 * rate50) + (100 * rate150) + (100 * rate250) + ((unit - 250) * rate250u);
    }

    printf("Bill Amount is : %.2f\n", bill);    
    sur_charge = bill * 0.20;

    FinalBill= bill+sur_charge;
    printf("Final Bill after 20%% increment: %.2f\n",FinalBill);
    printf("\nKindly Pay Your Bill Before Due Date, To Avoide Late Payment Charges. Thanks");
    return 0;
}
