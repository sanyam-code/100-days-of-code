//Delete an element from an array.
#include <stdio.h>
int main() {
    int n, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n]; 

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete the element (0 to %d): ", n - 1);
    scanf("%d", &position);

    if (position < 0 || position >= n) {
        printf("Invalid position!\n");
        return 1;
    }

     
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("The updated array is:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
