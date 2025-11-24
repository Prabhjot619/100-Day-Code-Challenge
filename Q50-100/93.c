// Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

void sort(char str[]) {
    int i, j;
    char temp;
    for(i = 0; str[i] != '\0'; i++) {
        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagrams\n");
        return 0;
    }

    sort(str1);
    sort(str2);

    if(strcmp(str1, str2) == 0)
        printf("Anagrams\n");
    else
        printf("Not Anagrams\n");

    return 0;
}
