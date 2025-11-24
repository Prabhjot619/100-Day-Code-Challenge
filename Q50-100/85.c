// Reverse a string.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, j, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length of the string
    while(str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    j = i - 1; // Set j to last character index

    // Reverse the string
    i = 0;
    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s", str);

    return 0;
}
