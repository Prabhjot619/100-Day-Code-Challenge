// Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, i, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter K (number of rotations): ");
    scanf("%d", &k);

    k = k % n;   // To handle k >= n

    // Rotate right
    for(i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Copy rotated array back
    for(i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after %d right rotations:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
