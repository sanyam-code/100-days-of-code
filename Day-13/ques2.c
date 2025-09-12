//  Write a program to print numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a number greater than 0.\n");
        return 1;
    }
    printf("Numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}
                        