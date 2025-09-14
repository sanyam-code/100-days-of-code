//Write a program to reverse a given number.
#include <stdio.h>
int main() {
    int n, reversed = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        int digit = n % 10; // Extract the last digit
        reversed = reversed * 10 + digit; // Append it to the reversed number
        n /= 10; // Remove the last digit from n
    }
    printf("Reversed number: %d\n", reversed);
    return 0;
}
