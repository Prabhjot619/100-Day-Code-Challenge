// Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main()
{   
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%2==0) {
        printf("%d is is an even number",a);
    }
    else {
        printf("%d is an odd number",a);
    }

    return 0;
}
