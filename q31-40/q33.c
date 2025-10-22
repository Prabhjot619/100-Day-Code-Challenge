// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>
int main() {
    int num,original, remainder, n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;

    for (original = num; original != 0; ++n) {
        original /= 10;
    }
    for (original = num; original != 0; original /= 10) {
        remainder = original % 10;
        result += pow(remainder, n);
    }
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}