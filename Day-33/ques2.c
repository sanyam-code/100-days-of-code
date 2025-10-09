//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int n, element, position;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    
    int arr[n + 1]; // Declare an array of size n+1 to accommodate the new element

    // Read elements into the array
    printf("Enter %d integers in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the new element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the appropriate position to insert the new element
    position = n; // Default position is at the end
    for (int i = 0; i < n; i++) {
        if (arr[i] > element) {
            position = i;
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the found position
    arr[position] = element;

    // Print the updated array
    printf("The updated array is:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
