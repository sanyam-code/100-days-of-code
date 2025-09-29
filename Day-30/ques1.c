//Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int n, evenCount = 0, oddCount = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare an array of size n

    // Read elements into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Print the counts of even and odd numbers
    printf("Number of even elements in the array: %d\n", evenCount);
    printf("Number of odd elements in the array: %d\n", oddCount);

    return 0;
}
