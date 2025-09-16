//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int n, original, sum = 0, digits = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n; // Store the original number

    // Count the number of digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of the cubes of each digit
    temp = n;
    while (temp != 0) {
        int digit = temp % 10; // Extract the last digit
        sum += pow(digit, digits); // Add the digit raised to the power of number of digits
        temp /= 10; // Remove the last digit from temp
    }

    if (original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }
    return 0;
}
