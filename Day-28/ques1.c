/*Write a program to print all the prime numbers from 1 to n.*/
#include <stdio.h>
#include <stdbool.h>
int main() {
    int n, i, j;
    bool isPrime;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++) { // Start from 2, as 1 is not prime
        isPrime = true; // Assume the number is prime

        // Check for factors from 2 to the square root of i
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false; // Found a factor, so it's not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i); // Print the prime number
        }
    }
    printf("\n");
    return 0;
}
