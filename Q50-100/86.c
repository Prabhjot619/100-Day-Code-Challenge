// Check if a string is a palindrome.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0, j, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length of the string
    while(str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    j = i - 1; // Set j to last character index

    // Check for palindrome
    i = 0;
    while(i < j) {
        if(str[i] != str[j]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
        i++;
        j--;
    }

    if(isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
