//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    int n, original, complement = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    original = n; // Store the original number
    while (n != 0) {
        int digit = n % 10; // Extract the last digit
        int flippedDigit = (digit == 0) ? 1 : 0; // Flip the digit
        complement += flippedDigit * place; // Add it to the complement at the correct place value
        place *= 10; // Move to the next place value
        n /= 10; // Remove the last digit from n
    }
    printf("1's complement of %d is %d\n", original, complement);
    return 0;
}
