//Write a program to print all factors of a given number.
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Factors of %d are: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i); // Print the factor
        }
    }
    printf("\n");
    return 0;
}
