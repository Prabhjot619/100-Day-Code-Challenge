// Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main()
{
    int a,b,temporary;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    
    a=a+b;
    b=b-a;
    a=a-b;
    printf("After swap: %d %d\n", a, b);
    
    return 0;
}