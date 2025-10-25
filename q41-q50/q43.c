// Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, temp, digit, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp=num;

    while (temp>0) {
        digit=temp%10;   // get last digit
        fact=1;

        // find factorial of digit
        for (int i=1; i<=digit; i++) {
            fact=fact*i;
        }

        sum=sum+fact;
        temp=temp/10;    // remove last digit
    }

    if (sum==num)
        printf("%d is a Strong number.", num);
    else
        printf("%d is not a Strong number.", num);

    return 0;
}
