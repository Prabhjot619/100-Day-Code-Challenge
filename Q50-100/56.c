// Read and print elements of a one-dimensional array.

#include <stdio.h>
int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("The elements in the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
