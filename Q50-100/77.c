// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n, i, j, k, flag = 1;

    printf("Enter size of matrix (n x n): ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Compare diagonal elements with each other
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i][i] == arr[j][j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
