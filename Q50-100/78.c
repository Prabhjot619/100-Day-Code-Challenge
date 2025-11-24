// Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter size of matrix (n x n): ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += arr[i][i]; // Main diagonal condition
    }

    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}
