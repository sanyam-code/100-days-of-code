//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int n, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare an array of size n

    // Read elements into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero elements in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    // Print the counts of positive, negative, and zero elements
    printf("Number of positive elements in the array: %d\n", positiveCount);
    printf("Number of negative elements in the array: %d\n", negativeCount);
    printf("Number of zero elements in the array: %d\n", zeroCount);

    return 0;
}
