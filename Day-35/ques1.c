//Find the second largest element in an array.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare an array of size n

    // Read elements into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize first and second largest
    int firstLargest = -2147483648; // Minimum possible integer value
    int secondLargest = -2147483648; // Minimum possible integer value

    // Find the first and second largest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest; // Update second largest
            firstLargest = arr[i]; // Update first largest
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i]; // Update second largest
        }
    }

    if (secondLargest == -2147483648) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
