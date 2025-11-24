// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, elem, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[50]; // assuming max size 50
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &elem);

    // Find correct position
    pos = n;
    for(i = 0; i < n; i++) {
        if(arr[i] > elem) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = elem;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
