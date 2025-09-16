//Write a program to check if a number is prime.
#include <stdio.h>
#include <stdbool.h>
int main() {
    int n, i;
    bool isPrime = true; // Assume the number is prime

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Handle edge cases
    if (n <= 1) {
        isPrime = false; // Numbers less than or equal to 1 are not prime
    } else {
        // Check for factors from 2 to the square root of n
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false; // Found a factor, so it's not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
