// Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50], temp[50];
    int i, j, maxLen = 0, len = 0;

    printf("Enter a sentence:\n");
    gets(str);

    j = 0;
    for(i = 0; i <= strlen(str); i++) {
        if(str[i] == ' ' || str[i] == '\0') { 
            temp[j] = '\0';
            len = strlen(temp);

            if(len > maxLen) {
                maxLen = len;
                strcpy(longest, temp);
            }

            j = 0; // reset for next word
        } else {
            temp[j++] = str[i];
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
