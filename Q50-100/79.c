// Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of matrix (n x n): ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal traversal:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);  // main diagonal element
    }

    return 0;
}
