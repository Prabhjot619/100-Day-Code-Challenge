// Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    gets(name);

    // Find last space (before surname)
    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ')
            lastSpace = i;
    }

    // Print initials before surname
    printf("%c. ", name[0]);
    for(i = 1; i < lastSpace; i++) {
        if(name[i] == ' ')
            printf("%c. ", name[i + 1]);
    }

    // Print surname fully
    printf("%s\n", &name[lastSpace + 1]);

    return 0;
}
