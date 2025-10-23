// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, first, last, temp, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10; // Get last digit

    // Find first digit and divisor (like 1000 for 1234)
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    first = temp;

    // Swap first and last digits
    num = num % divisor;          // Remove first digit
    num = num / 10;               // Remove last digit
    num = last * divisor + num * 10 + first;
 
    printf("Number after swapping first and last digit: %d", num);
    return 0;
}
