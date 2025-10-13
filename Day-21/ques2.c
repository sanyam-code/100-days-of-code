//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i; // Add the factor to the sum
        }
    }
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }
    return 0;
}
