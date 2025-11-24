// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], temp;
    int i, start = 0, end;

    printf("Enter a sentence:\n");
    gets(str);

    for(i = 0; i <= strlen(str); i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            while(start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;  // move to next word
        }
    }

    printf("Reversed words:\n%s\n", str);

    return 0;
}
