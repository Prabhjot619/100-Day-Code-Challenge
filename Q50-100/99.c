// Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
int main() {
    char date[11]; // Format: dd/04/yyyy
    char newDate[12]; // Format: dd-Apr-yyyy
    int i;

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", date);

    // Copy day part
    newDate[0] = date[0];
    newDate[1] = date[1];
    newDate[2] = '-';

    // Add month abbreviation
    newDate[3] = 'A';
    newDate[4] = 'p';
    newDate[5] = 'r';
    newDate[6] = '-';

    // Copy year part
    for(i = 6; i < 10; i++) {
        newDate[i + 3] = date[i];
    }
    newDate[11] = '\0'; // Null-terminate the string

    printf("Date in dd-Apr-yyyy format: %s\n", newDate);

    return 0;
}
    