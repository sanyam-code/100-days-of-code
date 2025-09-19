//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int n, product = 1, hasOdd = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        int digit = n % 10; // Extract the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply it to the product
            hasOdd = 1; // Mark that we found at least one odd digit
        }
        n /= 10; // Remove the last digit from n
    }
    if (hasOdd) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }
    return 0;
}
