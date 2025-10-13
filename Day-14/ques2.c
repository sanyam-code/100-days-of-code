//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n;
    unsigned long long product = 1; // Use unsigned long long to handle large products
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a number greater than 0.\n");
        return 1;
    }
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }
    printf("The product of even numbers from 1 to %d is: %llu\n", n, product);
    return 0;
}

