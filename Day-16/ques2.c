//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int n, original, reversed = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n; // Store the original number
    while (n != 0) {
        int digit = n % 10; // Extract the last digit
        reversed = reversed * 10 + digit; // Append it to the reversed number
        n /= 10; // Remove the last digit from n
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    return 0;
}
