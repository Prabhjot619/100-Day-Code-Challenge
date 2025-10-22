// Write a program to implement a basic calculator using switch-case for +, -, *, /, %

#include <stdio.h>
int main () {
    char operator;
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%f + %f = %f", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%f - %f = %f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%f * %f = %f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%f / %f = %f\n", num1, num2, result);
            } 
            else {
                printf("Error");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)result);
            } 
            else {
                printf("Error");
            }
            break;
        default:
            printf("Error: Invalid operator");
    }
    return 0;
}
