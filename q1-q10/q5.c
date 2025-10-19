// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
    double celcius,fahrenheit;
    
    printf("Enter the temperature in Celcius:");
    scanf("%lf",&celcius);
    
    fahrenheit = (celcius * 9.0 / 5.0) + 32.0;
    printf("The temperature in Fahrenheit is:%2lf",fahrenheit);
    return 0;
}