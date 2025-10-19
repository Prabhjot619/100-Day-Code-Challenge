// Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Enter 1st numbers: ");
    scanf("%f", &num1);
    printf("Enter 2nd numbers: ");
    scanf("%f", &num2);
    printf("Enter 3rd numbers: ");
    scanf("%f", &num3);
    
    if(num1>num2 && num1>num3) {
        printf("%f is the largest",num1);
    }
    else if(num2>num1 && num2>num3) {
        printf("%f is the largest",num2);
    }
    else {
        printf("%f is the largest",num3);
    }
    return 0;
}