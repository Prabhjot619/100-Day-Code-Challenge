// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main()
{
    int a,b,temporary;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    
    temporary=a;
    a=b;
    b=temporary;
    
    printf("After swap: %d %d\n", a, b);

    return 0;
}
