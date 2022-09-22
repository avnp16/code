//C program code for Leap Year, this C program is used to check whether the given year of input is a leap year or not.
//a year, occurring once every four years, which has 366 days including 29 February as an intercalary day.

#include <stdio.h>

int main()
{    
    int year;      
    printf("Enter a year to check if it is a leap year\n");
    scanf("%d", &year);
          
    if ( year%400 == 0)      
    printf("%d is a leap year.\n", year);  
        
    else if ( year%100 == 0)      
    printf("%d is not a leap year.\n", year); 
         
    else if ( year%4 == 0 )      
    printf("%d is a leap year.\n", year);
    
    else      
    printf("%d is not a leap year.\n", year);      
    
    return 0;    
}