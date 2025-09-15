//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
void printBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int binary[32]; // Array to store binary digits
    int index = 0;
    while (n > 0) {
        binary[index] = n % 2; // Store the remainder (0 or 1)
        n /= 2; // Divide n by 2
        index++;
    }
    // Print the binary digits in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    printf("Binary representation of %d is: ", n);
    printBinary(n);
    printf("\n");
    return 0;
}
