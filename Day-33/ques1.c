//Search in a sorted array using binary search.
#include <stdio.h>
int main() {
    int n, target, left, right, mid, found = 0;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare an array of size n

    // Read elements into the array
    printf("Enter %d integers in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the target element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Perform binary search
    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = left + (right - left) / 2; // Calculate mid index
        if (arr[mid] == target) {
            found = 1; // Element found
            break;
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
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
