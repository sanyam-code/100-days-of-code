//Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int n, target, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare an array of size n

    // Read elements into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the target element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Perform linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1; // Element found
            break;
        }
    }

    // Print the result of the search
    if (found) {
        printf("%d is present in the array.\n", target);
    } else {
        printf("%d is not present in the array.\n", target);
    }

    return 0;
}
