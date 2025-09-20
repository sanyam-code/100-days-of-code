//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int n, original, firstDigit, lastDigit, numDigits, middlePart;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n; // Store the original number

    // Find the last digit
    lastDigit = n % 10;

    // Count the number of digits and find the first digit
    numDigits = 0;
    while (n != 0) {
        firstDigit = n % 10; // Update firstDigit to the current last digit
        n /= 10; // Remove the last digit from n
        numDigits++;
    }

    // Calculate the middle part of the number (excluding first and last digits)
    middlePart = (original / 10) % (int)pow(10, numDigits - 2);

    // Construct the new number with swapped first and last digits
    int swappedNumber = lastDigit * (int)pow(10, numDigits - 1) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digits: %d\n", swappedNumber);
    return 0;
}
