//Write a program to check if a number is a strong number.
#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1; // Factorial of 0 and 1 is 1
    }
    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i; // Calculate factorial
    }
    return fact;
}
int main() {
    int n, original, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n; // Store the original number
    while (n != 0) {
        int digit = n % 10; // Extract the last digit
        sum += factorial(digit); // Add the factorial of the digit to the sum
        n /= 10; // Remove the last digit from n
    }
    if (original == sum) {
        printf("%d is a strong number.\n", original);
    } else {
        printf("%d is not a strong number.\n", original);
    }
    return 0;
}
