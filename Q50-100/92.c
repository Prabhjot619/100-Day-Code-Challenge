// Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, index;
    int freq[26] = {0}; // Frequency array for 'a' to 'z'

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find first repeating lowercase alphabet
    while(str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z') { // Check if lowercase alphabet
            index = ch - 'a';
            freq[index]++;
            if(freq[index] == 2) { // Found the first repeating character
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }
        i++;
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}