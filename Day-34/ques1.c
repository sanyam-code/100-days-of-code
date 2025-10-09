//Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int n, element, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n + 1]; // Declare an array of size n+1 to accommodate the new element

    // Read elements into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the new element and position to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert the element (0 to %d): ", n);
    scanf("%d", &position);

    // Validate the position
    if (position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Print the updated array
    printf("The updated array is:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
