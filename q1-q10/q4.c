// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>  
#define pi 3.14
int main()
{
    float radius, area, circumference;
    
    printf("Enter the radius of circle");
    scanf("%f",&radius);
    
    area=pi*radius*radius;
    circumference = 2*pi*radius;

    printf("Area of circle is: %f \n",area);
    printf("Circumference of circle is: %f",circumference);

    return 0;  
}