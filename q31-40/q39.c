// Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main(){
    int n, digit, product =1, a=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        digit = n % 10;
        if(digit % 2 != 0){
            product = product * digit;
            a=1;
        }
        n = n / 10;
    }
        printf("Product of odd digits: %d\n", product);
    }
