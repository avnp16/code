//4.5	WAP Program to Convert temperature from degree Celsius to Fahrenheit( Fahrenheit = (Celsius*9/5)+32)
//fahrenheit = (celsius * 9 / 5) + 32

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    /* Input temperature in celsius */
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    /* celsius to fahrenheit conversion formula */
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}