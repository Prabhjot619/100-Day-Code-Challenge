// Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    int number, digit, i;
    int count[10] = {0}; // Array to store count of digits 0-9

    printf("Enter an integer number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10; // Extract the last digit
        count[digit]++;      // Increment the count for this digit
        number /= 10;        // Remove the last digit
    }

    int maxCount = 0;
    int mostFrequentDigit = -1;
    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d (occurs %d times)\n", mostFrequentDigit, maxCount);

    return 0;
}