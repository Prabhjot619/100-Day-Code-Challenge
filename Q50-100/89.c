// Count frequency of a given character in a string.
#include <stdio.h>
int main() {
    char str[100], ch;
    int i = 0, freq = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to find frequency: ");
    scanf("%c", &ch);

    // Count frequency of the character
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ch) {
            freq++;
        }
        i++;
    }

    printf("Frequency of '%c': %d\n", ch, freq);

    return 0;
}
